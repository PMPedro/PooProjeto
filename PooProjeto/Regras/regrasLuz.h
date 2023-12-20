//
// Created by pmanu on 20/12/2023.
//

#ifndef POOPROJETO_REGRASLUZ_H
#define POOPROJETO_REGRASLUZ_H

#include "../Regras.h"

//Mete valor MAX e MIN para a propriedade
class RegrasLuz : Regras {
    int min = 0, max = 100;

public:
    RegrasLuz(int x) : Regras(x) {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)
    bool igual_X(int x);
    bool menor_que (int x);
    bool maior_que (int x);
    bool entre (int menor, int maior);
    bool fora (int menor , int maior);
    int check(int valor);   //serve para verificar se valor inserido pelo user esta dentro dos MAX e MIN possiveis, caso nao, vai para default
    ~RegrasLuz();
};


#endif //POOPROJETO_REGRASLUZ_H
