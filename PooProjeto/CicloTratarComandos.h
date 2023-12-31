//
// Created by pmanu on 23/12/2023.
//

#ifndef POOPROJETO_CICLOTRATARCOMANDOS_H
#define POOPROJETO_CICLOTRATARCOMANDOS_H
#include <iostream>
#include <string>
#include "Terminal.h"
#include "Habitacao.h"
#include "Interface.h"
#include <csignal>
#include "window.h"


class trataComandos {
private:

public:
    trataComandos();

    void comando(string comando, cWindow *listComandos, int *instante, Habitacao *casa, vector <cWindow*> &cZonas, int &flag, int &flag2);


};



#endif //POOPROJETO_CICLOTRATARCOMANDOS_H
