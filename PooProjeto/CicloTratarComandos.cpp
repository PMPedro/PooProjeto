//
// Created by pmanu on 23/12/2023.
//

#include "CicloTratarComandos.h"

trataComandos::trataComandos() {

}


void trataComandos::comando(std::string comando, cWindow *listComandos, cWindow *habi) {
    std::vector<std::string> check;
    Interface interface;

    check = interface.trataComando(comando);

    auto it = check.begin();

    if(check[0] == "true") {
        *listComandos << "Comando '" << comando << "' validado.\n";

    }else if(check[0] == "false"){
        *listComandos << "Comando '"<< comando << "' Invalido.\n";

    }
    //caso do exec
    if (check.size() > 1){
        *listComandos <<"\nFicheiro:\n\n";
        for(;it != check.end();++it){
            *listComandos << "\t" << *it;
        }
    }

    if(comando == "clear")
        listComandos->clear();
}
