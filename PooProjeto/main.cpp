#include <iostream>
#include <string>
#include "Terminal.h"
#include "Habitacao.h"
#include "Validacao.h"
#include "Executa.h"
#include "Interface.h"

using namespace term;

int main() {

    Terminal &t = Terminal::instance();
    string comando;


    //Código Interface
    //std::string str_in;
    t << move_to(0,0) << "[Trabalho de POO]";
    //str_in = "";
    //t >> str_in;

    t << move_to(0, 3) << "[Habitacao]:";

    t << move_to(0, 34 ) << "[Terminal]";
    Window getData = Window(0, 35, t.getNumCols() , 5);
    t << move_to(104, 0) << "[Lista de Comandos]:";
    Window listComandos = Window(t.getNumCols()/1.5, 1, t.getNumCols()/3,t.getNumRows() / 2);

    //Tratamento de Comandos
    std::vector<std::string> check;
    int conta = 1;
    while( comando != "sair" ) {
        getData >> comando;
        check.clear();
        check = trataComando(comando);
        auto it = check.begin();

        if (check.size() > 1){
            listComandos <<"\nFicheiro:\n\n";
            for(;it != check.end();++it){
                listComandos << "\t" << *it;
            }
            getData.clear();
        }
        if(check[0] == "true") {
            listComandos << "Comando '" << comando << "' validado.\n";
            //execHnova(comando);
            ++conta;
            getData.clear();
        }else if(check[0] == "false"){
            listComandos << "Comando '"<< comando << "' Invalido.\n";
            ++conta;
            getData.clear();
        }

        if (conta == 19){
            listComandos.clear();
            conta = 1;
        }

        if(comando == "clear")
            listComandos.clear();

    }
    //Fim Tratamento de Comandos

    //Fim código Interface

    return 0;
}

