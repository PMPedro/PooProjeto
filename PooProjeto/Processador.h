//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROCESSADOR_H
#define TP_PROCESSADOR_H
#include "Regras.h"
#include "vector"

class Processador {
    vector <Regras> regras;

public:

    Processador(const vector<Regras>& regras = vector <Regras>());
    //devolvem aos aparelhos o output das regras

};


#endif //TP_PROCESSADOR_H
