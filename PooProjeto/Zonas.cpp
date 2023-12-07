//
// Created by pmanu on 28/10/2023.
//

#include "Zonas.h"

Zona::Zona(int id, Propriedade prop, Sensor so, Aparelho apa, Processador proc) {
    this->id = id;
    this->propriedades  = prop;
    this->sensor = so;
    this->aparelho = apa;
    this->processador = proc;
}