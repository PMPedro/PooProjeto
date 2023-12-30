//
// Created by pmanu on 27/12/2023.
//

#ifndef POOPROJETO_COMANDOSOUTPUT_H
#define POOPROJETO_COMANDOSOUTPUT_H
#include "iostream"
#include "Habitacao.h"
#include "window.h"
class comandosOutput{
private:


public:
    comandosOutput();

    void prox(int *instante);
    void hNova(Habitacao *casa, int x, int y);
    void hrem (Habitacao *casa, vector<cWindow*> &czonas);
    void zLista(cWindow *comando, Habitacao *casa);
};

#endif //POOPROJETO_COMANDOSOUTPUT_H
