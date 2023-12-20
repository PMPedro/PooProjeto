//
// Created by pmanu on 20/12/2023.
//

#include "regrasVibracao.h"


bool RegrasVibracao::igual_X(int x) {
    x=check(x);
    return (this->getValor() == x);
}

int RegrasVibracao::check(int valor) {
    if(valor < this->min)
        valor = this->min;
    return valor;
}

bool RegrasVibracao::maior_que(int x) {
    return (this->getValor() < x);
}

bool RegrasVibracao::entre(int menor, int maior) {
    menor = check(menor);
    return ((this->getValor() >= menor) && (this->getValor() <= maior));
}

bool RegrasVibracao::fora(int menor, int maior) {
    menor = check(menor);
    return !((this->getValor() >= menor) && (this->getValor() <= maior));
}


RegrasVibracao::~RegrasVibracao(){

}

