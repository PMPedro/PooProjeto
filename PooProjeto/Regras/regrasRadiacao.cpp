//
// Created by pmanu on 20/12/2023.
//

#include "regrasRadiacao.h"

bool RegrasRadiacao::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasRadiacao::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasRadiacao::maior_que(int x) {
    return (this->getValor() < x);
}

bool RegrasRadiacao::entre(int menor, int maior) {
    menor = check(menor);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasRadiacao::fora(int menor, int maior) {
    menor = check(menor);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasRadiacao::~RegrasRadiacao(){

}