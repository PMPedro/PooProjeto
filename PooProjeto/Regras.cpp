//
// Created by pmanu on 28/10/2023.
//

#include "Regras.h"


Regras::Regras(int x, int regra, int y) {
    this->x = x;
    this->y = y;

    if((regra > 5) || (regra < 0)){
    this->qualRegra = 0;
    }else{
        this->qualRegra = regra;
    }
}

void Regras::setX(int x){this->x = x;}
void Regras::setY(int Y){this->y = Y;}

void Regras::setRegra(int regra, int x, int y) {
    if((regra > 5) || (regra < 0)){
        throw runtime_error("Invalid Value");
    }else{
        this->qualRegra = regra;
        this->x = x;
        this->y=y;
    }
}

bool Regras::obterValorRegra(int valor) {
    bool valret = false;
        if(this->qualRegra == 0){
        }else{



        if((this->qualRegra == 4) || (this->qualRegra == 5)){
            int menor, maior;
            if(this->x > this->y){
                menor = this->y;
                maior = this->x;
            }else{
                maior = this->y;
                menor = this->x;
            }
            if(this->qualRegra == 4){
            if((valor >= menor) && (valor <= maior))
                valret = true;
        }
            if(this->qualRegra == 5){
                if((valor <= menor) && (valor >= maior)){
                    valret = true;
                }
            }
        }
        if(qualRegra == 3){
            if(this->x < valor){
                valret = true;
            }
        }else if(qualRegra == 2){
            if(this->x > valor){
                valret = true;
            }
        }else{
            if(this->x == valor){
                valret = true;
            }
       }
  }
        return valret;
}




