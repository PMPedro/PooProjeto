//
// Created by pmanu on 28/10/2023.
//

#include "Sensores.h"

Sensores::Sensores(std::string Propriedade, Data valor) {

    this->regras = Regras();
    this->propriedadeLida = Propriedade;
    this->valorLido = valor;
}

Data Sensores::getPropriedade() {
    return valorLido;
}


void Sensores::set_valor(char propriedadeLida, Data valorLido) {
    this->propriedadeLida = propriedadeLida;
    this->valorLido = valorLido;
}

void Sensores::update_valor(int valor) {
    int aux = this->valorLido.getQuantidade();
}



