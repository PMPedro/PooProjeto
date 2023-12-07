//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_SENSORES_H
#define TP_SENSORES_H

#include "Data.h"

class Sensor {
    Data propriedade;

public:
    Sensor(Data valor = Data());

    Data getPropriedade();

    int getValor();
    string getUnidade();

    void set_Propriedade(Data valorLido);

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
