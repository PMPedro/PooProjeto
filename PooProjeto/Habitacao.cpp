//
// Created by pmanu on 28/10/2023.
//

#include "Habitacao.h"
 Habitacao::Habitacao(int dimensaoX, int dimensaoY, const vector <Zona> &zonas) {

    if(veriTamanho(dimensaoX, dimensaoY)){
    this->dimensaoX = dimensaoX;
    this->dimensaoY = dimensaoY;
    }else{
        this->dimensaoX = 0;
        this->dimensaoY = 0;
        cerr << "\nDimensoes invalidas, postas a 0";

    }
    if(!zonas.empty()){
        this->zonas = zonas;
    }
}

bool Habitacao::veriTamanho(int x, int y) {
    bool ret = true;

    if( ( x < 2 ) || ( x > 4))  ret = false;
    if( ( y < 2 ) || ( y > 4))  ret = false;

    return ret;
}


void Habitacao::setDimensaoX(int x) {
    if( ( x >= 2 ) && ( x <= 4))
        this->dimensaoX = x;
}

void Habitacao::setDimensaoY(int y) {
    if( ( y >= 2 ) && ( y <= 4))
        this->dimensaoY = y;
}

void Habitacao::addZonas(Zona zona) {
    int conta; //fazer dps 
}


int Habitacao::getDimX() {
    return this->dimensaoX;
}

int Habitacao::getDimY() {
    return this->dimensaoY;
}