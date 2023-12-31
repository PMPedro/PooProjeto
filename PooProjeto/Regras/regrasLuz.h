//
// Created by pmanu on 20/12/2023.
//

#ifndef POOPROJETO_REGRASLUZ_H
#define POOPROJETO_REGRASLUZ_H

#include "../Regras.h"

//Mete valor MAX e MIN para a propriedade
class RegrasLuz : Regras {


public:
    RegrasLuz(int x) : Regras(0,100,"m") {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)

    ~RegrasLuz();
};


#endif //POOPROJETO_REGRASLUZ_H
