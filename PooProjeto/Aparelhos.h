//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_APARELHOS_H
#define TP_APARELHOS_H

#include "iostream"
#include "string"
using namespace std;

class Aparelho {
        bool state;
        string name;
        static int nextid;
        int id;
public:
    Aparelho(string name);

    void setState();
    bool getState();
    int getId();

//Aquecedor
//Aspersor
//Refrigerador

//Lampada

};

//int Aparelho::nextid = 1;


#endif //TP_APARELHOS_H
