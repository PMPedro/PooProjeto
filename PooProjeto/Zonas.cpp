//
// Created by pmanu on 28/10/2023.
//

#include "Zonas.h"



Zona::Zona(int id, std::string letra, int posx, int posy, Propriedade propr) {
    this->id = id;
    this->letra = letra;
    this->posx = posx;
    this->posy = posy;
    propriedades = Propriedade();
}

int Zona::getposx() const { return this->posx; }

int Zona::getposy() const {return this->posy; }

void Zona::setZonePosX(int x) { this->posx = x; }

void Zona::setZonePosY(int y) { this->posy = y; }

int Zona::getId() { return this->id ; }

void Zona::addAquecedor(Aquecedor a) {
    this->aparelhos.push_back((a));
}

void Zona::addAspersor(Aspersor a) {
    this->aparelhos.push_back((a));
}

void Zona::addLampada(Lampada l) {
    this->aparelhos.push_back(((l)));
}

void Zona::addRegrigerador(Refrigerador r) {
    this->aparelhos.push_back(((r)));
}

void Zona::addProcessador(Processador p) {
    this->processador.push_back(((p)));
}

int Zona::getNumAparelhos() {

    return aparelhos.size();
}

int Zona::getNumProcessadores() {
    return processador.size();
}

int Zona::getNumSensoeres() {
    return sensores.size();
}

void Zona::eraseProcessador(int id) {
    if (!processador.empty()) {
        for (size_t i = 0; i < processador.size(); ++i) {
            if (processador[i].getId() == id) {
                processador.erase(processador.begin() + i);
                break;
            }
        }
    }
}


void Zona::eraseSensor(int id) {
    if (!sensores.empty()) {
        for (size_t i = 0; i < sensores.size(); ++i) {
            if (sensores[i].getId() == id) {
                sensores.erase(sensores.begin() + i);
                break;
            }
        }
    }
}

void Zona::eraseAparelho(int id) {
    if (!aparelhos.empty()) {
        for (size_t i = 0; i < aparelhos.size(); ++i) {
            if (aparelhos[i].getId() == id) {
                aparelhos.erase(aparelhos.begin() + i);
                break;
            }
        }
    }
}

vector<Sensor> Zona::getSensor() {
    return this->sensores;
}

vector<Aparelho> Zona::getAparelho() {
    return this->aparelhos;
}

vector<Processador> Zona::getProcessador() {
    return this->processador;
}

Propriedade Zona::getPropriedades() {
    return this->propriedades;
}

void Zona::setPropriedades(Propriedade P) {
    this->propriedades = P;
}