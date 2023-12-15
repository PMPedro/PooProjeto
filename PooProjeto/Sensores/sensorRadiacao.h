//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSORRADIACAO_H
#define TP_SENSORRADIACAO_H
#include "../Sensores.h"

class sensorRadiacao : Sensor {
    string unidade;

public:
    sensorRadiacao(int valor = 0) : Sensor(valor), unidade("Becquerel") {};
    int getValor();
    void setValor( int valor );
    ~sensorRadiacao();
};


#endif //TP_SENSORRADIACAO_H
