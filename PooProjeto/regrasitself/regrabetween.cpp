//
// Created by pmanu on 31/12/2023.
//

#include "regrabetween.h"

bool rbeetween::rule(int value1, int valor_a_comparar, int value2) {
    return (valor_a_comparar >= value1 && valor_a_comparar <= value2);
}
