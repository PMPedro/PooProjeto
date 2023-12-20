//
// Created by pmanu on 20/12/2023.
//

#ifndef POOPROJETO_REGRASTEMPERATURA_H
#define POOPROJETO_REGRASTEMPERATURA_H


#include "../Regras.h"

//Mete valor MIN para a propriedade
class RegrasTemperatura : Regras {
    int min = -273;

public:
    RegrasTemperatura(int x) : Regras(x) {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)
    bool igual_X(int x);
    bool menor_que (int x);
    bool maior_que (int x);
    bool entre (int menor, int maior);
    bool fora (int menor , int maior);
    int check(int valor);   //serve para verificar se valor inserido pelo user esta dentroMIN possiveis, caso nao, vai para default
    ~RegrasTemperatura();
};




#endif //POOPROJETO_REGRASTEMPERATURA_H
