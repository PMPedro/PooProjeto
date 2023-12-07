//
// Created by pmanu on 28/10/2023.
//

#include "Sensores.h"

Sensor::Sensor(Data valor) {
    this->propriedade.setPropriedades(valor);
}

Data Sensor::getPropriedade() {
    return this->propriedade;
}

string Sensor::getUnidade() {
    return this->getUnidade();
}

int Sensor::getValor() {
    return this->getValor();
}

void Sensor::set_Propriedade(Data valorLido) {
    this->propriedade.setPropriedades(valorLido);
}

void Sensor::setValor(int valor) {
    this->propriedade.setQuantidade(valor);
}

