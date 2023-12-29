//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_SENSORES_H
#define TP_SENSORES_H

#include "Data.h"
//Apenas tem valor (q era igual para todos) dps cada filho ira gerir esse valor de acordo com o q mede
//Filhos tb tem a unidade 
class Sensor {
    int valor;
    string nome;
   int nextid = 1;
    int id;

public:
    Sensor(int v = 0, string n = " ");

    int getValorSensor();
    void setValorSensor(int valor);
    int getId();

};

//int Sensor::nextid = 1;

#endif //TP_SENSORES_H
