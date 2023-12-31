//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_REGRAEQUAL_H
#define POOPROJETO_REGRAEQUAL_H
#include "regrait.h"
class rEqual : public regrait {
private:


public:
    rEqual(int valorcompararcom) : regrait(valorcompararcom) {};

    bool rule(int valor_a_comparar) override;



};
#endif //POOPROJETO_REGRAEQUAL_H
