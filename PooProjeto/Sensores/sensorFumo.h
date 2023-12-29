//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORFUMO_H
#define TP_SENSORFUMO_H
#include "../Sensor.h"

class sensorFumo : public Sensor {
    string unidade;
public:
    sensorFumo(int valor = 0) : Sensor(valor, "Fumo") , unidade("Obscuração(%)") {};
    void setFumo(int valor);
    Data getFumo();


};

#endif //TP_SENSORFUMO_H
