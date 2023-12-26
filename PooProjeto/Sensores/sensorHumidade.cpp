//
// Created by pmanu on 15/12/2023.
//

#include "sensorHumidade.h"

void sensorHumidade::setHumidade(int valor) {
    this->setValorSensor(valor);
}

Data sensorHumidade::getHumidade() {
    Data x(this->getValorSensor(), this->unidade);
    return x;
}

