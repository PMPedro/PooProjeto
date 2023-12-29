//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROPRIEDADES_H
#define TP_PROPRIEDADES_H
#include "Data.h"
#include "Sensores/headerSensores.h"
#include "cstdlib"

#define NUMAPARELHOS 7
//Ir buscar valores aos respetivos sensores
//fazer include do header dos sensores

class Propriedade {
    Data temperatura; //em celcius MIN->-273
    Data luz; //Em lumens, MIN->0
    Data radiacao; //Em Becquerel, MIN->0
    Data vibracao; //Em Hertz, MIN_>0
    Data humidade; //em %, Min->0, MAX->100
    Data fumo; //em Obscuração(%), MIN->0,MAX->100
    Data som; //Decibeis MIN->0

public:

    Propriedade(Data temp = Data(), Data luz = Data(), Data rad = Data(),
                 Data vib = Data(), Data hum = Data(), Data fum = Data(),
                 Data som = Data()
                 );
    void inilerSensores(SensorTemperatura temp = SensorTemperatura(rand() % 15 + 20),
                        sensorLuz luz = sensorLuz(rand() % 15 + 20),
                        sensorRadiacao rad = sensorRadiacao(rand() % 1 + 3),
                        sensorVibracao vib = sensorVibracao(rand() % 5 + 10),
                        sensorHumidade humidade = sensorHumidade(rand() % 5 + 25),
                        sensorSom som = sensorSom(rand() % 1 + 10),
                        sensorFumo fumo = sensorFumo(rand() % 1 + 5));
    int getTemp();
    int getLuz();
    int getRad();
    int getHumidade();
    int getFumo();
    int getSom();

    void setTemp(int x);
    void setLuz(int x);
    void setRad(int x);
    void setHumidade(int x);
    void setFumo(int x);
    void setSom(int x);
};


#endif //TP_PROPRIEDADES_H
