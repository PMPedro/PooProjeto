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
        *comando << "\n" << "Ainda nao existem Zonas!";
    }else{
        for(int i = 0; i < aux.size(); i++){
            (*comando).clear();
            *comando << "Zona Id-> " << aux[i].getId() << "\nNumero de Sensores-> " << aux[i].getNumSensoeres() << "\nNumero de Aparelhos-> "<<aux[i].getNumAparelhos()
            << "\nNumero de Processadores-> " << aux[i].getNumProcessadores() << "Pos x | Pos y-> " << aux[i].getposx() << " | " << aux[i].getposy();
            getchar();
        }
    }

}




