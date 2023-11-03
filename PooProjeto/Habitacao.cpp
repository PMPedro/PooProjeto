//
// Created by pmanu on 28/10/2023.
//

#include "Habitacao.h"
 Habitacao::Habitacao(int dimensaoX, int dimensaoY, const vector <Zonas> &zonas) {
    this->dimensaoX = dimensaoX;
    this->dimensaoY = dimensaoY;

    if(!zonas.empty()){
        this->zonas = zonas;
    }
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