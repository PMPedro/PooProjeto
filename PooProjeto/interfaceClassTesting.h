//
// Created by pmanu on 22/12/2023.
//

#ifndef POOPROJETO_INTERFACECLASSTESTING_H
#define POOPROJETO_INTERFACECLASSTESTING_H
#include "iostream"
#include "Interface.h"
#include "string"
#include "window.h"

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

        string a;
        getComandos << " <>">> a;
        listComandos<<a;
    };
};



#endif //POOPROJETO_INTERFACECLASSTESTING_H
