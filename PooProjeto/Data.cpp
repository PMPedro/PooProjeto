//
// Created by pmanu on 03/11/2023.
//

#include "Data.h"

Data::Data(int qt, string uni) {
    this->quantidade = qt;
    this->unidade = uni;
}

Data Data::getValores() {
    Data aux(this->quantidade,this->unidade);
    return aux;
}

void Data::setUnidade(std::string Unidade) {
    this->unidade = Unidade;
}

void Data::setQuantidade(int Quantidade) {
    this->quantidade = Quantidade;
}

