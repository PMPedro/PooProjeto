//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_RFORA_H
#define POOPROJETO_RFORA_H
#include "regrait.h"
class rfora : public regrait {
private:


public:
    rfora(int value1, int value2) : regrait(value1, value2) {};
    bool rule(int valor_a_comparar) override;
};

#endif //POOPROJETO_RFORA_H
