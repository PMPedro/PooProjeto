//
// Created by pmanu on 20/12/2023.
//

#include "regrasLuz.h"


bool RegrasLuz::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasLuz::check(int valor) {
    if(valor > this->max)
        valor = this->max;
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasLuz::maior_que(int x) {
    x = check(x);
    return (this->getValor() < x);
}

bool RegrasLuz::entre(int menor, int maior) {
    menor = check(menor);
    maior = check(maior);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasLuz::fora(int menor, int maior) {
    menor = check(menor);
    maior= check(maior);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasLuz::~RegrasLuz() {

}