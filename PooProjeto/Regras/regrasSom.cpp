//
// Created by pmanu on 20/12/2023.
//

#include "regrasSom.h"



bool RegrasSom::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasSom::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasSom::maior_que(int x) {
    return (this->getValor() < x);
}

bool RegrasSom::entre(int menor, int maior) {
    menor = check(menor);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasSom::fora(int menor, int maior) {
    menor = check(menor);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasSom::~RegrasSom(){

}
