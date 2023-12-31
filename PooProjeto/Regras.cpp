//
// Created by pmanu on 28/10/2023.
//

#include "Regras.h"
Regras::Regras(int min, int max, std::string letra) {

    this->min = min;
    this->max = max;
    this->pro = letra;
}

void Regras::setValor(int x) {this->valor = x;}
int Regras::getValor() {return this->valor;}

Regras::~Regras() {

}


bool Regras::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int Regras::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool Regras::maior_que(int x) {
    return (this->getValor() < x);
}

bool Regras::entre(int menor, int maior) {
    menor = check(menor);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool Regras::fora(int menor, int maior) {
    menor = check(menor);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}

string Regras::getLetra() {
    return this->pro;
}











