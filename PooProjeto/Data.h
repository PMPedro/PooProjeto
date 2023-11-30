//
// Created by pmanu on 03/11/2023.
//

#ifndef POOPROJETO_DATA_H
#define POOPROJETO_DATA_H
#include "string"
using namespace std;

class Data {
    int quantidade;
    string unidade;
public:
    Data(int qt = 0, string uni = "");
    Data getValores();

    void setQuantidade(int Quantidade);
    void setUnidade(string Unidade);

    int getQuantidade();
    string getUnidade();


};


#endif //POOPROJETO_DATA_H
