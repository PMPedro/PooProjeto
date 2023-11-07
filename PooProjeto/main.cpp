#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Terminal.h"
#include "Habitacao.h"
#include "cstring"


using namespace term;


void print_size(Terminal& t) {
    std::ostringstream o;
    o << "tamanho do terminal: " << std::setw(7) << t.getNumCols() << "x" << t.getNumRows();
    std::string str = o.str();
    t.clear();
    t << set_color(0) << move_to(t.getNumCols()-str.length(), t.getNumRows()-1) << str;
}



int main() {
    Terminal &t = Terminal::instance();
    Habitacao habi1(4,2);
    string comando;


    std::string str_in;
    str_in = "";
    t >> str_in;

    t << move_to(5, 3) << "Habitacao:";
    Window w = Window(5, 4, habi1.getDimX() * 5, habi1.getDimY() * 5);

    t << move_to(0, t.getNumRows() /1.6 ) << "Diga as Dimensoes Aqui: ";
    Window getData = Window(0, t.getNumRows() /1.5, t.getNumCols() , 5);
    Window listComandos = Window(t.getNumCols()/1.5, 0, t.getNumCols()/3,t.getNumRows() / 2);




    while( comando != "exit" ) {
        
    getData >> comando;
    listComandos << comando << "\n";
    getData.clear();
    }

    



    /*const char *str = "World";

    for(int i=1; i<20; i++) {
        t.init_color(i, i, 0);
    }

    print_size(t);


    t << move_to(10, 1) << "Hello " << str;

    for(int i=0; i<20; i++) {
        t << move_to(20, i+3) << set_color(i) << i;
    }


    t << move_to(40, 3) << set_color(0) << "Carregue numa tecla";
    t.getchar();

    t.clear();

    std::string str_in;
    t << no_color() << move_to(0, 10) << "Introduza uma string: ";
    t >> str_in;

    t << move_to(5, 3) << "Escreveu:";
    Window w = Window(5, 4, 30, 4);
    w << set_color(1) << str_in;
    w << no_color() << "teste";

    t << move_to(0, 11) << "carregue numa tecla";
    t.getchar();

    w.clear();
    t << move_to(0, 11) << "limpei a janela\ncarregue numa tecla";
    t.getchar();

    t << move_to(5, 3) << "Agora escreva aqui:";
    w << set_color(2) >> str_in;

    t << move_to(5, 3) << "Escreveu: " << str_in;

    t.getchar();
     */
    return 0;
}

