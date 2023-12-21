//
// Created by diogo on 12/21/2023.
//
#include "Executa.h"
#include "Terminal.h"
#include "Habitacao.h"

using namespace term;

Window execHnova(string comando){
    std::istringstream iss(comando);

    std::string keyword;
    int nLinhas, nColunas;
    iss >> keyword >> nLinhas >> nColunas;
    cout << nLinhas << endl;
    cout << nColunas << endl;

    Habitacao habitacao(nLinhas,nColunas);

    Window w = Window(10, 4, habitacao.getDimX() * 10, habitacao.getDimY() * 5);
    w.clear();

    return w;
}