//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORLUZ_H
#define TP_SENSORLUZ_H


#include "../Sensor.h"


class sensorLuz:public Sensor {
    string unidade;
public:

    sensorLuz(int valor = 0): Sensor(valor), unidade("Lumens") {};
    void setLuz(int valor);
    Data getLuiz();
    ~sensorLuz();

};

#endif //TP_SENSORLUZ_H






