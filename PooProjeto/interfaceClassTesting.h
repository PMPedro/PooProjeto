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
    cWindow habi;
    cWindow getComandos;
    cWindow listComandos;




public:
    interfaceClassTesting(int altura, int largura, int w, int h) : habi(altura,largura,w,h), getComandos(10,10,10,10), listComandos(altura,largura,w,h)  {
        habi.setWindow(altura,largura,w,h,"Habitacao");
        Terminal &t = Terminal::instance();


        getComandos.setWindow(5, t.getNumCols() - 2, t.getNumRows() - 10, 0, "Comandos");
        listComandos.setWindow(t.getNumRows() / 2,20,2,t.getNumCols() - 20, "list");
        trataComandos dealWithComando;


        string comando;
        int indi = 0;
        while(comando != "exit"){
            getComandos << "<>" >> comando;

            getComandos.clear();

            if(indi == 4){
                listComandos.clear();
                indi = 0;
            }
            dealWithComando.comando(comando, &listComandos, &habi);
            indi++;
        }
    };
};



#endif //POOPROJETO_INTERFACECLASSTESTING_H
