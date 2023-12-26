//
// Created by pmanu on 28/10/2023.
//

#include "Sensor.h"


Sensor::Sensor(int valor) {
    this->valor = valor;
}

int Sensor::getValorSensor() {
    return this->valor;
}

void Sensor::setValorSensor(int valor) {
    this->valor = valor;
}

