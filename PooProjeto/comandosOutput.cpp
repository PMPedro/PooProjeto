//
// Created by pmanu on 27/12/2023.
//

#include "comandosOutput.h"
comandosOutput::comandosOutput() {

}


void comandosOutput::prox(int *instante) {
    (*instante)++;
}

void comandosOutput::hNova(Habitacao *casa, int x, int y) {

    if( ( (x >= 2) && (x <= 4) || (y >= 2) && (y <= 4)) ){

        casa->setDimensaoX(x);
        casa->setDimensaoY(y);
    }
}

void comandosOutput::hrem(Habitacao *casa, vector<cWindow*> &czonas) {
    casa->limpaZonas();
    for (auto* window : czonas) {
        (*window).totalClear();
        delete window;
    }
    czonas.clear();
}


void comandosOutput::zLista(cWindow *comando, Habitacao *casa) {
    vector <Zona> aux;
    aux = (*casa).getZonas();
    if(aux.empty()){
        *comando << "Ainda nao existem Zonas!";
    }else{
        *comando << "N de zonas = " + to_string(aux.size()) + ".";
        *comando << "";
        *comando << "Lista de Zonas:";
        *comando << "";
        for(int i = 0; i < aux.size(); i++){
            *comando << "\tZona Id -> " + to_string(aux[i].getId());
            *comando << "\tNumero de Sensores -> " + to_string(aux[i].getNumSensoeres());
            *comando << "\tNumero de Aparelhos -> " + to_string(aux[i].getNumAparelhos());
            *comando << "\tNumero de Processadores -> " + to_string(aux[i].getNumProcessadores());
            *comando << "\tPos x = " + to_string(aux[i].getposx()) + " | Pos y = " + to_string(aux[i].getposy());
            *comando << "";
        }
    }

}




