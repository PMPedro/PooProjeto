//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROPRIEDADES_H
#define TP_PROPRIEDADES_H
#include "Sensores.h"
#include "Aparelhos.h"
#include "Data.h"

class Propriedades {
    Sensores sensor[6];
    Aparelhos aparelho;
    Data temperatura; //em celcius MIN->-273
    Data luz; //Em lumens, MIN->0
    Data radiacao; //Em Becquerel, MIN->0
    Data vibracao; //Em Hertz, MIN_>0
    Data humidade; //em %, Min->0, MAX->100
    Data fumo; //em Obscuração(%), MIN->0,MAX->100
    Data som; //Decibeis MIN->0

public:
    Propriedades(Sensores Sensor = Sensores (), Aparelhos aparelhos = Aparelhos (), Data temperatura = Data (), Data luz = Data (), Data Rad = Data (), Data vib = Data (), Data humi = Data (), Data Fumo = Data (), Data Som = Data ());
    //ir buscar valores aos sensores
    //Usa a class Data para ter valores de char i int, tb dá struct


};


#endif //TP_PROPRIEDADES_H
