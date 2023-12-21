#include <string>
#include "Terminal.h"
#include "Habitacao.h"
#include "Interface.h"

using namespace term;

int main() {
    cout << "SIGA SIGA";
    ::getchar();
    Terminal &t = Terminal::instance();
    string comando;
    Habitacao habitacao;
    Interface interface;
    //Código Interface
    //texto
    t << move_to(0,0) << "[Trabalho de POO]";
    t << move_to(0, 3) << "[Habitacao]:";
    t << move_to(0, 34 ) << "[Terminal]";
    t << move_to(104, 0) << "[Lista de Comandos]:";

    //cria as janelas de output de texto e o terminal de input do dono
    Window getData = Window(0, 35, t.getNumCols() , 5);
    Window listComandos = Window(t.getNumCols()/1.5, 1, t.getNumCols()/3,t.getNumRows() / 2);

    //Tratamento de Comandos
    std::vector<std::string> check;
    int conta = 1;

    while( comando != "sair" ) {
        getData >> comando;
        check.clear();
        check = interface.trataComando(comando);

        auto it = check.begin();

        if(check[0] == "true") {
            listComandos << "Comando '" << comando << "' validado.\n";
            ++conta;
            getData.clear();
        }else if(check[0] == "false"){
            listComandos << "Comando '"<< comando << "' Invalido.\n";
            ++conta;
            getData.clear();
        }

        //caso do exec
        if (check.size() > 1){
            listComandos <<"\nFicheiro:\n\n";
            for(;it != check.end();++it){
                listComandos << "\t" << *it;
            }
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

