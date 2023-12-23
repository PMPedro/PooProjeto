//
// Created by pmanu on 15/12/2023.
//

#include "sensorVibracao.h"

Data sensorVibracao::getValorVibracao() {
    Data x(this->getValorSensor(), this->unidade);
    return x;
}

void sensorVibracao::setValorVibracao(int valor) {
    this->setValorSensor(valor);
}

sensorVibracao::~sensorVibracao() {

}
