//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORHUMIDADE_H
#define TP_SENSORHUMIDADE_H
#include "../Sensor.h"

class sensorHumidade :public Sensor {
    string unidade;
public:
    sensorHumidade(int valor = 0) : Sensor(valor, "Humidade"), unidade("%") {};
    void setHumidade(int valor);
    Data getHumidade();

};
#endif //TP_SENSORHUMIDADE_H
