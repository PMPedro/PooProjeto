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
    void inilerSensores(SensorTemperatura temp = SensorTemperatura(rand() % (25 - 1 + 1) + 15),
                        sensorLuz luz = sensorLuz(rand() % (20 - 1 + 1) + 10),
                        sensorRadiacao rad = sensorRadiacao(rand() % (3 - 1 + 1) + 1),
                        sensorVibracao vib = sensorVibracao(rand() % (17 - 1 + 1) + 1),
                        sensorHumidade humidade = sensorHumidade(rand() % (25 - 1 + 1) + 5),
                        sensorSom som = sensorSom(rand() % (30 - 1 + 1) + 1),
                        sensorFumo fumo = sensorFumo(rand() % (10 - 1 + 1) + 1));
    int getTemp();
    int getLuz();
    int getRad();
    int getHumidade();
    int getFumo();
    int getSom();
    int getVibracao();

    void setTemp(int x);
    void setLuz(int x);
    void setRad(int x);
    void setHumidade(int x);
    void setFumo(int x);
    void setSom(int x);
    void setVibracao(int x);

    void setTemp(SensorTemperatura x);
    void setLuz(sensorLuz x);
    void setRad(sensorRadiacao x);
    void setHumidade(sensorHumidade x);
    void setFumo(sensorFumo x);
    void setSom(sensorSom x);
    void setVibracao(sensorVibracao x);
};


#endif //TP_PROPRIEDADES_H
