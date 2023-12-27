//
// Created by pmanu on 28/10/2023.
//

#include "Zonas.h"



Zona::Zona(int id, string letra, int posx, int posy, Propriedade prop, Sensor so, Aparelho apa, Processador proc) {
    this->id = id;
    this->propriedades  = prop;
    this->sensor = so;
    this->aparelho = apa;
    this->processador = proc;
    this->posx = posx;
    this->posy = posy;
    this->letra = letra;
}

int Zona::getposx() { return this->posx; }

int Zona::getposy() {return this->posy; }

void Zona::setZonePosX(int x) { this->posx = x; }

void Zona::setZonePosY(int y) { this->posy = y; }

int Zona::getId() { return this->id ; }