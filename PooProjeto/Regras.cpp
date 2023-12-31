//
// Created by pmanu on 28/10/2023.
//

#include "Regras.h"
int Regras::proxid = 1;
Regras::Regras(int min, int max, std::string letra, regrait regra) : valorRegra(regra) {

    this->min = min;
    this->max = max;
    this->pro = letra;
    this->id = proxid++;
}


Regras::~Regras() {

}

int Regras::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

string Regras::getLetra() {
    return this->pro;
}

void Regras::setRegra(maioq regra) {this->valorRegra = regra;}

void Regras::setRegra(rfora regra) {this->valorRegra = regra;}

void Regras::setRegra(menorq regra) {this->valorRegra = regra;}

void Regras::setRegra(rEqual regra) {this->valorRegra = regra;}

void Regras::setRegra(rbeetween regra) {this->valorRegra = regra;}

bool Regras::getRegraValue(int valor) {
    return this->valorRegra.rule(valor);
}

int Regras::getid() {
    return this->id;
}














