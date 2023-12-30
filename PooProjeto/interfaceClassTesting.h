//
// Created by pmanu on 22/12/2023.
//

#ifndef POOPROJETO_INTERFACECLASSTESTING_H
#define POOPROJETO_INTERFACECLASSTESTING_H
#include "iostream"
#include "Interface.h"
#include "string"
#include "window.h"
#include "CicloTratarComandos.h"

using namespace term;
using namespace std;

class interfaceClassTesting  {
private:
    cWindow getComandos;
    cWindow listComandos;
    vector<cWindow*> sczonas;

public:
    interfaceClassTesting(int altura, int largura, int w, int h) : getComandos(30,30,30,30), listComandos(altura,largura,40,40)  {
        //habi.setWindow(1,3,1,1,"");
        Terminal &t = Terminal::instance();

        getComandos.setWindow(5, t.getNumCols() - 2, t.getNumRows() - 6, 1, "Comandos");
        listComandos.setWindow(t.getNumRows() -15,50,0,t.getNumCols() - 50, "List");
        trataComandos dealWithComando;
        Habitacao pcasa(2 , 2 );
        Habitacao *casa = &pcasa;

        //Habitacao habitacao(1,2);
        int instante = 0;

        string comando;
        string aux;
        aux = "Instante ";

        int indi = 0;
        while(comando != "sair"){
            getComandos << "<>" >> comando;
            getComandos.clear();
            if(indi == 8){
                listComandos.clear();
                indi = 0;
            }

            dealWithComando.comando(comando, &listComandos, &instante, casa, sczonas);
            aux += to_string(instante);
            listComandos << aux;
            aux = "Instante ";
            indi++;
        }

    };
};



#endif //POOPROJETO_INTERFACECLASSTESTING_H
