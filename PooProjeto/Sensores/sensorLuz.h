//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORLUZ_H
#define TP_SENSORLUZ_H


#include "../Sensores.h"


class sensorLuz:public Sensor {
    string unidade;
public:

    sensorLuz(int valor = 0): Sensor(valor), unidade("Lumens") {};
    void setValor(int valor);
    int getValor();
    ~sensorLuz();

};

#endif //TP_SENSORLUZ_H






