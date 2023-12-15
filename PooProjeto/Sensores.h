//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_SENSORES_H
#define TP_SENSORES_H

#include "Data.h"
#include "Propriedades.h"

class Sensor {
    int valor;

public:
    Sensor(int v = 0);

    int getValor();
    void setValor(int valor);




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
