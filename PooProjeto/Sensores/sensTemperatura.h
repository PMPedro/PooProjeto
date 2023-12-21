//
// Created by pmanu on 15/12/2023.
//

#ifndef TP_SENSTEMPERATURA_H
#define TP_SENSTEMPERATURA_H
#include "iostream"
using namespace std;
#include "../Sensor.h"

class SensorTemperatura : public Sensor {
    string unidade;

public:
    SensorTemperatura(int valor = 0) : Sensor(valor), unidade("Celcius"){};
    int get_valor();
    int set_valor(int valor);
    ~SensorTemperatura();

};



#endif //TP_SENSTEMPERATURA_H
