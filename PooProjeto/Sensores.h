//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_SENSORES_H
#define TP_SENSORES_H
#include "Regras.h"
#include "Data.h"

class Sensores {
    Regras regras;
    string propriedadeLida;
    Data valorLido;

public:
    Sensores(string Propriedade = " ", Data valor = Data());


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
