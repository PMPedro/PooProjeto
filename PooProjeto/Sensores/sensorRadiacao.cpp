//
// Created by pmanu on 15/12/2023.
//

#include "sensorRadiacao.h"

Data sensorRadiacao::getRad() {
    Data x(this->getValorSensor(), this->unidade);
    return x;
}

void sensorRadiacao::setRad(int valor) {
    this->setValorSensor(valor);

}
sensorRadiacao::~sensorRadiacao() {

}
