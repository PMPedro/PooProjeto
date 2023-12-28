//
// Created by pmanu on 28/10/2023.
//

#include "Aparelhos.h"


Aparelho::Aparelho(std::string name) {
    this->name = name;
    this->state = false;
    id = nextid++;
}

void Aparelho::setState() {
    this->state = !state;
}

bool Aparelho::getState() {
    return this->state;
}

int Aparelho::getId() {
    return this->id;
}