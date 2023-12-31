//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_MAIORQ_H
#define POOPROJETO_MAIORQ_H
#include "regrait.h"
class maioq : public regrait {
private:


public:
    maioq(int valor1) : regrait(valor1) {};

    bool rule(int valor_a_comparar) override;



};
#endif //POOPROJETO_MAIORQ_H
