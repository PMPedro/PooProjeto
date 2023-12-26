//
// Created by pmanu on 15/12/2023.
//

#include "sensorSom.h"

void sensorSom::setSom(int valor) {
    setValorSensor(valor);
}

Data sensorSom::getSom() {
    Data x(this->getValorSensor(), this->unidade);
    return x;
}

sensorSom::~sensorSom() {

}
