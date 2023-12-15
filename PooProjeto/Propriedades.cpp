//
// Created by pmanu on 28/10/2023.
//

#include "Propriedades.h"
#include "Sensores/headerSensores.h"


Propriedade::Propriedade(Data temp, Data luz, Data rad, Data vib, Data hum, Data fum, Data som) {
    this->fumo.setPropriedades(fum);
    this->humidade.setPropriedades(hum);
    this->vibracao.setPropriedades(vib);
    this->radiacao.setPropriedades(rad);
    this->luz.setPropriedades(luz);
    this->temperatura.setPropriedades(luz);
    this->som.setPropriedades(som);




}