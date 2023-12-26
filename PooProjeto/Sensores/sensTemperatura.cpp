//
// Created by pmanu on 15/12/2023.
//

#include "sensTemperatura.h"


void SensorTemperatura::set_valortemp(int valor) {
    setValorSensor(valor);
}

Data SensorTemperatura::get_valortemp() {
    Data x(this->getValorSensor(), this->unidade);
    return x;
}

SensorTemperatura::~SensorTemperatura() {

}

