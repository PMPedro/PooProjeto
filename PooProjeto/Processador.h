//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_PROCESSADOR_H
#define TP_PROCESSADOR_H
#include "Regras.h"
#include "vector"
//Vai fzr include do header das regras
//1 propriedade qq pode ter mais q 1 regra, por exemplo, a temperatura pode  ter a regra de ser menor q 4, e ser menor q 2 por exemplo
//regras vao ser bool, fzr o resto aqui, vai ser o Procesador q controla e faz a gestao das regras
//No duturo ter conhecimento das propriedades talvez? Tenho de ver melhor maneira para fzr

class Processador {
    vector <Regras> regras;

public:

    Processador(const vector<Regras>& regras = vector <Regras>());
    //devolvem aos aparelhos o output das regras

};


#endif //TP_PROCESSADOR_H
