//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORFUMO_H
#define TP_SENSORFUMO_H
#include "../Sensores.h"

class sensorFumo : Sensor {
    string unidade;
public:
    sensorFumo(int valor = 0) : Sensor(valor) , unidade("Obscuração(%)") {};
    void setFumo(int valor);
    int getFumo();
};

#endif //TP_SENSORFUMO_H
