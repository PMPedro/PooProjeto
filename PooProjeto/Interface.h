//
// Created by diogo on 12/21/2023.
//

#ifndef POOPROJETO_INTERFACE_H
#define POOPROJETO_INTERFACE_H
#include "Terminal.h"
#include <vector>
#include <iostream>
#include "window.h"
#include "Habitacao.h"
class Interface {
public:
    std::vector<std::string> trataComando(const std::string&comando, int *instante, cWindow *habitacao, cWindow *listComandos, Habitacao *casa, vector <cWindow> *cZonas);
private:
    std::vector<std::string> leFicheiro(const std::string& nFicheiro, int *instante, cWindow *habitacao, cWindow *listComandos, Habitacao *casa, vector <cWindow> *cZonas);
    std::string limpaComando(const std::string&comando);
    bool veriAvanca(const std::string&comando, int *instante);
    bool veriHnova(const std::string&comando, cWindow *habi, Habitacao *casa);
    bool veriZnova(const std::string& comando, Habitacao *casa, vector <cWindow> *cZonas);
    bool veriZrem(const std::string& comando, Habitacao *casa, vector <cWindow> *cZonas);
    bool veriZcomp(const std::string& comando, Habitacao *casa, cWindow *listComando);
    bool veriZprops(const std::string&comando);
    bool veriPmod(const std::string&comando);
    bool veriCnovo(const std::string&comando);
    bool veriCrem(const std::string&comando);
    bool veriRnova(const std::string&comando);
    bool veriPmuda(const std::string&comando);
    bool veriRlista(const std::string&comando);
    bool veriRrem(const std::string&comando);
    bool veriAsoc(const std::string&comando);
    bool veriAdes(const std::string&comando);
    bool veriAcom(const std::string&comando);
    bool veriPsalva(const std::string&comando);
    bool veriPrepoe(const std::string&comando);
    bool veriPrem(const std::string&comando);
    std::string veriExec(const std::string&comando);
};


#endif //POOPROJETO_INTERFACE_H