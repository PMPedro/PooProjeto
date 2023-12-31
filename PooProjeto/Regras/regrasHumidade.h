//
// Created by pmanu on 19/12/2023.
//

#ifndef POOPROJETO_REGRASHUMIDADE_H
#define POOPROJETO_REGRASHUMIDADE_H
#include "../Regras.h"

//Mete valor MAX e MIN para a propriedade
class RegraHumidade : Regras {


public:
        RegraHumidade(int x) : Regras(0,100,"h") {};
//Faz regras e devolve "true" or "false", o Processador mais tarde ira processar esse resultado (de acordo com os comandos q temos de fazer)

        ~RegraHumidade();
};

#endif //POOPROJETO_REGRASHUMIDADE_H


