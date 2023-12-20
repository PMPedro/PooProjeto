//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_REGRAS_H
#define TP_REGRAS_H

using namespace std;
#include "iostream"
//FALTA ALTERAR
//ter apenas X, Y, e as regras
//dps nos filhos, vai ser geridos se n ultrapassa os valores possiveis da propriedade defenida e redefenicao das regras (caso necessario) 

class Regras {
    int valor; //valor a ser comparado


public:

    Regras(int valor = 0);

    void setValor(int x);
    int getValor();
    ~Regras();


    /*Fazer->
     *  igual_a(x)  ->1
     *  menor_que(x) ->2
     *  maior_que(x)->3
     *  entre(x,y) ->4
     *  fora(x,y) ->5
     */

};


#endif //TP_REGRAS_H
