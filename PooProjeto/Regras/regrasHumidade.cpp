//
// Created by pmanu on 19/12/2023.
//

#include "regrasHumidade.h"


bool RegraHumidade::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegraHumidade::check(int valor) {
    if(valor > this->max)
        valor = this->max;
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegraHumidade::maior_que(int x) {
    x = check(x);
    return (this->getValor() < x);
}

bool RegraHumidade::entre(int menor, int maior) {
    menor = check(menor);
    maior = check(maior);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegraHumidade::fora(int menor, int maior) {
    menor = check(menor);
    maior= check(maior);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegraHumidade::~RegraHumidade() {

}