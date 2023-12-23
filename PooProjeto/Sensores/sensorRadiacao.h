//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORRADIACAO_H
#define TP_SENSORRADIACAO_H
#include "../Sensor.h"

class sensorRadiacao :public Sensor {
    string unidade;

public:
    sensorRadiacao(int valor = 0) : Sensor(valor), unidade("Becquerel") {};
    Data getRad();
    void setRad( int valor );
    ~sensorRadiacao();
};


#endif //TP_SENSORRADIACAO_H
