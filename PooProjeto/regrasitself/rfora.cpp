//
// Created by pmanu on 31/12/2023.
//

#include "rfora.h"

bool rfora::rule(int valor_a_comparar) {
    return (valor_a_comparar < getvalor1() || valor_a_comparar > getvalor2());
}
