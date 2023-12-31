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
#include "utils.h"

using namespace term;
using namespace std;

class interfaceClassTesting  {
private:
    vector<cWindow*> sczonas;

public:
    interfaceClassTesting(int altura, int largura, int w, int h){
        //habi.setWindow(1,3,1,1,"");
        Terminal &t = Terminal::instance();
        cWindow getComandos(4, t.getNumCols(), t.getNumRows() - 4, 0);
        cWindow listComandos(t.getNumRows() -4,78,0,t.getNumCols() - 78);

        //getComandos.setWindow(4, t.getNumCols() - 2, t.getNumRows() - 4, 0, "Comandos");
        //listComandos.setWindow(t.getNumRows() -5,70,0,t.getNumCols() - 70, "List");
        trataComandos dealWithComando;
        Habitacao pcasa(2 , 2 );
        Habitacao *casa = &pcasa;

        //Habitacao habitacao(1,2);
        int instante = 0;

        string comando;
        string aux;
        aux = "Instante ";

        int indi = 0;
        int flag = 1;
        int flag2 = 0;
        while(comando != "sair"){
            getComandos << "<>" >> comando;
            getComandos.clear();
            if(indi == 34){
                listComandos.clear();
                indi = 0;
            }
            string limpo = limpaComando(comando);

            if(limpo != "hnova" && flag == 1){
                listComandos << "Efetue 'hnova x y!'";
                indi++;
                continue;
            }
            flag = 0;
            dealWithComando.comando(comando, &listComandos, &instante, casa, sczonas, flag, flag2);
            //aux += to_string(instante);
            //listComandos << aux;
            //aux = "Instante ";
            indi++;
        }
    };
};



#endif //POOPROJETO_INTERFACECLASSTESTING_H
