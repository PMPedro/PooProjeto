//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_HABITACAO_H
#define TP_HABITACAO_H
#include "Zonas.h"
#include "vector"

class Habitacao {
    vector<Zonas> zonas;
    int dimensaoX, dimensaoY;

public:
    Habitacao(int dimensaoX = 0, int dimensaoY = 0, const vector<Zonas>& zonas = vector<Zonas>());

    void setDimensaoX(int x);
    void setDimensaoY(int y);
    void addZonas (Zonas zona);



    //fazer um set dimensao x e y, com min 2 e max 4;
    //fazer constructor
    //pode ter infinitas zonas
    //pode nao ter zonas tb
    //permitir constuir e demolir uma habitacao, com toda a sua info

};


#endif //TP_HABITACAO_H
