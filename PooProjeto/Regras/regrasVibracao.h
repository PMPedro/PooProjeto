//
// Created by pmanu on 20/12/2023.
//

#ifndef POOPROJETO_REGRASVIBRACAO_H
#define POOPROJETO_REGRASVIBRACAO_H

#include "../Regras.h"

//Mete valor MIN para a propriedade
class RegrasVibracao : Regras {
    int min = 0;

public:
    RegrasVibracao(int x) : Regras(0, 10000, "v") {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)
    bool igual_X(int x);
    bool menor_que (int x);
    bool maior_que (int x);
    bool entre (int menor, int maior);
    bool fora (int menor , int maior);
    int check(int valor);   //serve para verificar se valor inserido pelo user esta dentroMIN possiveis, caso nao, vai para default
    ~RegrasVibracao();
};


#endif //POOPROJETO_REGRASVIBRACAO_H
