//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORHUMIDADE_H
#define TP_SENSORHUMIDADE_H
#include "../Sensores.h"

class sensorHumidade : Sensor {
    string unidade;
public:
    sensorHumidade(int valor = 0) : Sensor(valor), unidade("%") {};
    void setHumidade(int valor);
    int getHumidade();
};
#endif //TP_SENSORHUMIDADE_H
