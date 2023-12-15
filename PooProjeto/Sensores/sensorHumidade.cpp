//
// Created by pmanu on 15/12/2023.
//

#include "sensorHumidade.h"

void sensorHumidade::setHumidade(int valor) {
    this->setValor(valor);
}

int sensorHumidade::getHumidade() {
    return this->getValor();
}

