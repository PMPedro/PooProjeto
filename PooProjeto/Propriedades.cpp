//
// Created by pmanu on 28/10/2023.
//

#include "Propriedades.h"

Propriedades::Propriedades(Sensores Sensor, Aparelhos aparelhos, Data temperatura, Data luz, Data Rad, Data vib,  Data humi, Data Fumo, Data Som) {
    this->sensor = Sensor;
    this->aparelho = aparelhos;
    this->temperatura = temperatura;
    this->luz = luz;
    this->radiacao = Rad;
    this->vibracao = vib;
    this->humidade = humi;
    this->fumo = Fumo;
    this->som = Som;
}

