//
// Created by pmanu on 27/12/2023.
//

#include "comandosOutput.h"
comandosOutput::comandosOutput() {

}


void comandosOutput::prox(int *instante) {
    (*instante)++;
}

void comandosOutput::hNova(cWindow *habi, Habitacao *casa, int x, int y) {

    if( ( (x >= 2) && (x <= 4) || (y >= 2) && (y <= 4)) ){

        habi->totalClear();
        casa->setDimensaoX(x);
        casa->setDimensaoY(y);
        habi->setWindow(casa->getDimX() * 2, casa->getDimY() * 4, 1 , 1 , "Habitacao");
    }
}

void comandosOutput::hrem(cWindow *habi, Habitacao *casa) {
     habi->totalClear();
   //  delete casa;
}

void comandosOutput::zLista(cWindow *comando, Habitacao *casa) {
    vector <Zona> aux;
    aux = (*casa).getZonas();
    if(aux.empty()){
        *comando << "\n" << "Ainda nao existem Zonas!";
    }else{
        for(int i = 0; i < aux.size(); i++){
            *comando << aux[i].getId() << aux[i].getposy() << aux[i].getposx();
        }
    }

}


