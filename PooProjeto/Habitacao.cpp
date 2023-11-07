//
// Created by pmanu on 28/10/2023.
//

#include "Habitacao.h"
 Habitacao::Habitacao(int dimensaoX, int dimensaoY, const vector <Zonas> &zonas) {
try{
    if(veriTamanho(dimensaoX, dimensaoY)){
    this->dimensaoX = dimensaoX;
    this->dimensaoY = dimensaoY;
    }else{
        this->dimensaoX = 0;
        this->dimensaoY = 0;
        throw (1);
    }

}catch (...){
    cout << "\n=Dimensoes invalidas, serao postas a 0=\n";
}
    if(!zonas.empty()){
        this->zonas = zonas;
    }
}

bool Habitacao::veriTamanho(int x, int y) {
    bool ret = true;
    if( (x < 2) || (x > 4) ){
        ret = false;
    }
    if( (y < 2) || (y > 4) ){
        ret = false;
    }

    return ret;
}


void Habitacao::setDimensaoX(int x) {
    this->dimensaoX = x;
}

void Habitacao::setDimensaoY(int y) {
    this->dimensaoY = y;
}

void Habitacao::addZonas(Zonas zona) {
    this->zonas.push_back(zona);
}

int Habitacao::getDimX() {
    return this->dimensaoX;
}

int Habitacao::getDimY() {
    return this->dimensaoY;
}