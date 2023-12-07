#include <iostream>
#include <string>
#include <iomanip>
#include "Terminal.h"
#include "Habitacao.h"
#include "Validacao.h"
#include "Leitura.h"

using namespace term;


/*void print_size(Terminal& t) {
    std::ostringstream o;
    o << "tamanho do terminal: " << std::setw(7) << t.getNumCols() << "x" << t.getNumRows();
    std::string str = o.str();
    t.clear();
    t << set_color(0) << move_to(t.getNumCols()-str.length(), t.getNumRows()-1) << str;
}*/



int main() {

    getchar();
    Terminal &t = Terminal::instance();

    //Cria habita��o s� para fins visuais!
    Habitacao habi1(2,2);
    string comando;



    //C�digo Interface
    //std::string str_in;
    t << move_to(0,0) << "[Trabalho de POO]";
    //str_in = "";
    //t >> str_in;

    t << move_to(5, 3) << "[Habitacao]:";
    Window w = Window(5, 4, habi1.getDimX() * 5, habi1.getDimY() * 5);

    t << move_to(0, t.getNumRows() /1.6 ) << "[Terminal]";
    Window getData = Window(0, t.getNumRows() /1.5, t.getNumCols() , 5);
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

    //Fim c�digo Interface

    return 0;
}

