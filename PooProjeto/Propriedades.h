//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROPRIEDADES_H
#define TP_PROPRIEDADES_H
#include "Sensor.h"
#include "Aparelhos.h"
#include "Data.h"
#include "Sensor.h"



class Sensor;
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


    //ir buscar valores aos sensores
    //Usa a class Data para ter valores de char i int, tb dá struct




};


#endif //TP_PROPRIEDADES_H
