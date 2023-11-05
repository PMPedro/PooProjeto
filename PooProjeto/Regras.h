//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_REGRAS_H
#define TP_REGRAS_H

using namespace std;
#include "iostream"

class Regras {
    int x;
    int y;
    int qualRegra; //

public:

    Regras(int x=0, int regra = 0, int y = 0);
    void setRegra(int regra, int x = 0, int y = 0);
    void setX(int x);
    void setY(int Y);
    bool obterValorRegra(int valor);

    /*Fazer->
     *  igual_a(x)  ->1
     *  menor_que(x) ->2
     *  maior_que(x)->3
     *  entre(x,y) ->4
     *  fora(x,y) ->5
     */

};


#endif //TP_REGRAS_H
