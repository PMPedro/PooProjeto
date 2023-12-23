//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORVIBRACAO_H
#define TP_SENSORVIBRACAO_H
#include "../Sensor.h"

class sensorVibracao : Sensor{
    string unidade;
public:
    sensorVibracao(int valor = 0) : Sensor(valor), unidade("Hertz") {};
    void setValorVibracao(int valor);
    Data getValorVibracao();
    ~sensorVibracao();
};
#endif //TP_SENSORVIBRACAO_H
