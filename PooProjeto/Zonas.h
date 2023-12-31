//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_ZONAS_H
#define TP_ZONAS_H
#include "Propriedades.h"
#include "Aparelhos.h"
#include "Processador.h"
#include "Data.h"
#include "Aparelhos/headerAparelhos.h"

class Zona {
 //   unique_ptr<int> example2;
    Propriedade propriedades;
    vector <Sensor> sensores;
    vector <Aparelho> aparelhos;
    vector <Processador> processador;
    int posx, posy;
    int id;
    static int nextId;
    string letra;
    //unique_ptr<vector<Aparelho>> example;



public:
    Zona( string letra = "N", int posx = 0, int posy = 0 , Propriedade propr = Propriedade());
    int getposx() const;
    int getposy() const;
    void setZonePosX(int x);
    void setZonePosY(int y);
    int getNumSensores;
    int getId();

    void addAquecedor( Aquecedor a);
    void addLampada( Lampada l );
    void addRegrigerador( Refrigerador r );
    void addAspersor (Aspersor a);
    void addProcessador(Processador p);

    int getNumProcessadores();
    int getNumAparelhos();
    int getNumSensoeres();

    void eraseProcessador(int id);
    void eraseSensor(int id);
    void eraseAparelho(int id);

    vector <Sensor> getSensor();
    vector <Aparelho> getAparelho();
    vector <Processador> getProcessador();
    Propriedade getPropriedades();
    void setPropriedades(Propriedade P);




//fazer add Processador, aparelhos e addSensores


};

//int Zona::nexid = 1;


#endif //TP_ZONAS_H


