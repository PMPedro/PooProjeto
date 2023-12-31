//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_REGRAS_H
#define TP_REGRAS_H
#include "regrasitself/typesRules.h"
#include "vector"
using namespace std;
#include "iostream"
//FALTA ALTERAR
//ter apenas X, Y, e as regras
//dps nos filhos, vai ser geridos se n ultrapassa os valores possiveis da propriedade defenida e redefenicao das regras (caso necessario) 

class Regras {

    int min;
    int max;
    string pro;
    regrait valorRegra;
    int id;
    static int proxid;



public:

    Regras(int min = 0, int max = 0, string letra =" ", regrait regra = regrait(0,999));

    void setValor(int x);
    int getValor();

    int check(int valor);
    string getLetra();
    void setRegra(maioq regra);
    void setRegra(menorq regra);
    void setRegra(rEqual regra);
    void setRegra(rbeetween regra);
    void setRegra(rfora regra);

    bool getRegraValue(int valor);
    int getid();


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
