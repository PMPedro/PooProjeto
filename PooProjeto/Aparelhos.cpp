//
// Created by pmanu on 28/10/2023.
//

#include "Aparelhos.h"

Aparelhos::Aparelhos() {
    this->lampada = false;
    this->aquecedor = false;
    this->refrigerador = false;
    this->aspersor = false;
}


void Aparelhos::onOfAquecedor() {
    if(!this->aquecedor){   this->aquecedor = true; }
    else{  this->aquecedor = false; }
}

void Aparelhos::onOfAspersor() {
    if (!this->aspersor) {  this->aspersor = true;  }
    else {  this->aspersor = false; }
}

void Aparelhos::onOfLampada() {
    if (!this->lampada) {   this->lampada = true;   }
    else {  this->lampada = false;  }
}

void Aparelhos::onOfRefrigerador() {
    if (!this->refrigerador) {  this->refrigerador = true;  }
    else {  this->refrigerador = false; }
}


const bool Aparelhos::getStateAquecedor()     {   return this->aquecedor;}
const bool Aparelhos::getStateAspersor()      {   return this->aspersor;}
const bool Aparelhos::getStateLampada()       {   return this->lampada;}
const bool Aparelhos::getStateRefrigerador() {    return this->refrigerador;}

