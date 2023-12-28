//
// Created by pmanu on 28/10/2023.
//

#include "Processador.h"

Processador::Processador() {
    this->id = nextid++;
}

int Processador::getId() {
    return this->id;
}

void Processador::addRegra(Regras r) {
    this->regras.push_back((r));
}
