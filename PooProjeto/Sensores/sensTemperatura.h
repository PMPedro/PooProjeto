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
    SensorTemperatura(int valor = 0) : Sensor(valor,"Temperatura"), unidade("Celcius"){};
    Data get_valortemp();
    void set_valortemp(int valor);
    ~SensorTemperatura();

};



#endif //TP_SENSTEMPERATURA_H
