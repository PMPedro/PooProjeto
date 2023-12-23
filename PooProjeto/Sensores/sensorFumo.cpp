//
// Created by pmanu on 15/12/2023.
//

#include "sensorFumo.h"

Data sensorFumo::getFumo() {
    Data fumo(this->getValorSensor(), this->unidade);
    return fumo;
}

void sensorFumo::setFumo(int valor) {
    setValorSensor(valor);
}

