//
// Created by pmanu on 28/10/2023.
//

#include "Sensores.h"

Sensores::Sensores(std::string Propriedade, Data valor) {
    Regras regra();
    this->regras = regra();
    this->propriedadeLida = Propriedade;
    this->valorLido = valor;
}
