//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_SENSORES_H
#define TP_SENSORES_H

#include "Data.h"
#include "Propriedades.h"
//Apenas tem valor (q era igual para todos) dps cada filho ira gerir esse valor de acordo com o q mede
//Filhos tb tem a unidade 
class Sensor {
    int valor;

public:
    Sensor(int v = 0);

    int getValorSensor();
    void setValorSensor(int valor);




    //NAo reage a passagem do tempo
    /*
     *  Sensor Letra (p/ visualização) Propriedade observada
        temperatura t Temperatura
        movimento v Vibração
        luminosidade m Luz
        radiação d Radiação
        humidade h Humidade
        som o Som
        fumo f Fumo
     *
     */
};


#endif //TP_SENSORES_H
