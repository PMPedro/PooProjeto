//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_REGRABETWEEN_H
#define POOPROJETO_REGRABETWEEN_H
#include "regrait.h"
class rbeetween : public regrait {
private:


public:
    rbeetween(int valorcompararcom) : regrait(valorcompararcom) {};



    bool rule(int value1, int valor_a_comparar, int value2) override;



};
#endif //POOPROJETO_REGRABETWEEN_H
