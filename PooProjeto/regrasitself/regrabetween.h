//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_REGRABETWEEN_H
#define POOPROJETO_REGRABETWEEN_H
#include "regrait.h"
class rbeetween : public regrait {
private:


public:
    rbeetween(int value1, int value2) : regrait(value1, value2) {};



    bool rule(int valor_a_comparar) override;



};
#endif //POOPROJETO_REGRABETWEEN_H
