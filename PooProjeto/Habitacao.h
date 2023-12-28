//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_HABITACAO_H
#define TP_HABITACAO_H
#include "Zonas.h"

//Ao apagar uma zona, por exemplo, tudo o q esta dentro dessa zona tb e apagado, usar smart pointer ai, para n ter erros no futuro ao apagar zonas
//verificar dimenso X e y para n ultrapassarem os valores defenidos


class Habitacao {
    vector<Zona> zonas;
    int dimensaoX, dimensaoY;

public:
    int id = 0;
    Habitacao(int dimensaoX = 0, int dimensaoY = 0, const vector<Zona>& zonas = vector<Zona>());

    void veriTamanho(int *x);
    void setDimensaoX(int x);
    void setDimensaoY(int y);
    void addZonas (int x, int y, string letra);
    int getDimX();
    int getDimY();
    bool checkZonasQuant();
    vector <Zona> getZonas();






    //fazer um set dimensao x e y, com min 2 e max 4;
    //fazer constructor
    //pode ter infinitas zonas
    //pode nao ter zonas tb
    //permitir constuir e demolir uma habitacao, com toda a sua info

};


#endif //TP_HABITACAO_H
