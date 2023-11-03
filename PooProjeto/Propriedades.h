//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROPRIEDADES_H
#define TP_PROPRIEDADES_H
#include "Sensores.h"
#include "Aparelhos.h"
#include "Data.h"

class Propriedades {
    Sensores sensor;
    Aparelhos aparelho;
    Data temperatura; //em celcius MIN->-273
    Data luz; //Em lumens, MIN->0
    Data radiacao; //Em Becquerel, MIN->0
    Data vibracao; //Em Hertz, MIN_>0
    Data humidade; //em %, Min->0, MAX->100
    Data fumo; //em Obscuração(%), MIN->0,MAX->100
    Data SOM; //Decibeis MIN->0

    //ir buscar valores aos sensores
    //Usa a class Data para ter valores de char i int, tb dá struct


};


#endif //TP_PROPRIEDADES_H
