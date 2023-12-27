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
    int posx, posy;
    int id;
    string letra;

public:
    Zona( int id,string letra = "N", int posx = 0, int posy = 0,  Propriedade prop = Propriedade(), Sensor so = Sensor(), Aparelho apa = Aparelho(), Processador proc = Processador() );
    int getposx();
    int getposy();
    void setZonePosX(int x);
    void setZonePosY(int y);
    int getNumSensores;
    int getId();


//fazer add Processador, aparelhos e addSensores


};


#endif //TP_ZONAS_H
