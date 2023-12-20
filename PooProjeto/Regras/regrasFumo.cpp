//
// Created by pmanu on 20/12/2023.
//

#include "regrasFumo.h"
//
// Created by pmanu on 19/12/2023.
//

#include "RegrasFumo.h"


bool RegrasFumo::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasFumo::check(int valor) {
    if(valor > this->max)
        valor = this->max;
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasFumo::maior_que(int x) {
    x = check(x);
    return (this->getValor() < x);
}

bool RegrasFumo::entre(int menor, int maior) {
    menor = check(menor);
    maior = check(maior);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasFumo::fora(int menor, int maior) {
    menor = check(menor);
    maior= check(maior);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasFumo::~RegrasFumo() {

}