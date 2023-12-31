//
// Created by pmanu on 20/12/2023.
//

#ifndef POOPROJETO_REGRASFUMO_H
#define POOPROJETO_REGRASFUMO_H
#include "../Regras.h"

//Mete valor MAX e MIN para a propriedade
class RegrasFumo : Regras {

public:
    RegrasFumo() : Regras(0, 100,"f") {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)

    ~RegrasFumo();
};
#endif //POOPROJETO_REGRASFUMO_H
