//
// Created by pmanu on 28/10/2023.
//

#include "Habitacao.h"
Habitacao::Habitacao(int dimensaoX, int dimensaoY, const vector <Zona> &zonas) {

    veriTamanho(&dimensaoX);
    veriTamanho(&dimensaoY);
    this->dimensaoX = dimensaoX;
    this->dimensaoY = dimensaoY;
    if(!zonas.empty())
        this->zonas = zonas;
}

void Habitacao::veriTamanho(int *x) {
    if( (*x < 2) || (*x > 4) )
        *x = 2;
    //caso dimensao n esteja entre 2 e 4 e posta a um valor default, 2
}

void Habitacao::setDimensaoX(int x) {
    if( ( x >= 2 ) && ( x <= 4))
        this->dimensaoX = x;
}

void Habitacao::setDimensaoY(int y) {
    if( ( y >= 2 ) && ( y <= 4))
        this->dimensaoY = y;
}

void Habitacao::addZonas(int x, int y, string letra) {
       Zona aux(letra, x, y);
        if(checkZonasQuant()){
            this->zonas.push_back(aux);
        }
}

int Habitacao::getDimX() {
    return this->dimensaoX;
}

int Habitacao::getDimY() {
    return this->dimensaoY;
}

bool Habitacao::checkZonasQuant() {
    int conta = this->dimensaoY * this->dimensaoX;
    int zonasSize = this->zonas.size();
    return !(zonasSize >= conta);
}

vector<Zona> Habitacao::getZonas() {
    return this->zonas;
}

void Habitacao::addZonas(Zona zona) {
    this->zonas.push_back(zona);
}

void Habitacao::limpaZonas() {
    zonas.clear();
}

void Habitacao::removeZona(int index) {
    if (index >= 0 && index < zonas.size()) {
        zonas.erase(zonas.begin() + index);
    }
}

void Habitacao::replaceZona(int index, Zona nZona) {
    for(int i = 0; i < this->zonas.size(); i++){
        if(this->zonas[i].getId() == index){
            this->zonas[i] = nZona;
        }
    }
}