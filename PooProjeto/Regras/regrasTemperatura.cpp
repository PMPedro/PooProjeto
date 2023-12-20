//
// Created by pmanu on 20/12/2023.
//

#include "regrasTemperatura.h"

bool RegrasTemperatura::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasTemperatura::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasTemperatura::maior_que(int x) {
    return (this->getValor() < x);
}

bool RegrasTemperatura::entre(int menor, int maior) {
    menor = check(menor);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasTemperatura::fora(int menor, int maior) {
    menor = check(menor);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasTemperatura::~RegrasTemperatura() {

}

