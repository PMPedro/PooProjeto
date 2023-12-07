//
// Created by pmanu on 28/10/2023.
//

#include "Aparelhos.h"


Aparelho::Aparelho() {
    this->lampada = false;
    this->aquecedor = false;
    this->refrigerador = false;
    this->aspersor = false;
}

void Aparelho::onOfAquecedor() {
    if(!this->aquecedor){   this->aquecedor = true; }
    else{  this->aquecedor = false; }
}

void Aparelho::onOfAspersor() {
    if (!this->aspersor) {  this->aspersor = true;  }
    else {  this->aspersor = false; }
}

void Aparelho::onOfLampada() {
    if (!this->lampada) {   this->lampada = true;   }
    else {  this->lampada = false;  }
}

void Aparelho::onOfRefrigerador() {
    if (!this->refrigerador) {  this->refrigerador = true;  }
    else {  this->refrigerador = false; }
}


const bool Aparelho::getStateAquecedor()     {   return this->aquecedor;}
const bool Aparelho::getStateAspersor()      {   return this->aspersor;}
const bool Aparelho::getStateLampada()       {   return this->lampada;}
const bool Aparelho::getStateRefrigerador() {    return this->refrigerador;}

