//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_ZONAS_H
#define TP_ZONAS_H
#include "Propriedades.h"
#include "Sensor.h"
#include "Aparelhos.h"
#include "Processador.h"
#include "Data.h"

class Zona {
    Propriedade propriedades;
    Sensor sensor;
    Aparelho aparelho;
    Processador processador;
    int id;

public:

    Zona(int id, Propriedade prop = Propriedade(), Sensor so = Sensor(), Aparelho apa = Aparelho(), Processador proc = Processador() );
};


#endif //TP_ZONAS_H
