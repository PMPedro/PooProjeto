//
// Created by pmanu on 15/12/2023.
//

#include "sensorLuz.h"

void sensorLuz::setLuz(int valor) {
    setValorSensor(valor);
}

Data sensorLuz::getLuiz() {
    Data x1(this->getValorSensor(),this->unidade);
    return x1;
}

sensorLuz::~sensorLuz() {
    
}