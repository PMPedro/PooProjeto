//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORSOM_H
#define TP_SENSORSOM_H
#include "../Sensor.h"

class sensorSom : Sensor {
    string unidade;
public:
    sensorSom(int valor = 0) : Sensor(valor), unidade("Decibeis") {};
    int getSom();
    void setSom(int valor);
    ~sensorSom();

};

#endif //TP_SENSORSOM_H
