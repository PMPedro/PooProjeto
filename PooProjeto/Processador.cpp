//
// Created by pmanu on 28/10/2023.
//

#include "Processador.h"
int Processador::nextid = 1;
Processador::Processador() {
    this->id = nextid++;
}

int Processador::getId() {
    return this->id;
}

void Processador::addRegra(Regras r) {
    this->regras.push_back((r));
}

bool Processador::checkPropriedade(int valor, std::string letra) {
    if(!(this->regras.empty())){
        for(int i = 0; i < regras.size(); i ++){
        if(regras[i].getLetra() == letra);
        
        }
    }
}
