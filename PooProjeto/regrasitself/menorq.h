//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_MENORQ_H
#define POOPROJETO_MENORQ_H
#include "regrait.h"
class menorq : public regrait {
private:


public:
    menorq(int valor1) : regrait(valor1) {};

    bool rule(int valor_a_comparar) override;



};
#endif //POOPROJETO_MENORQ_H
