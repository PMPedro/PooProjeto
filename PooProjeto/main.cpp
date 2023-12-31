#include <iostream>
#include <string>
#include "Terminal.h"
#include "Habitacao.h"
#include "Interface.h"
#include <csignal>
#include "interfaceClassTesting.h"

using namespace term;



int main() {
    getchar();
    srand(static_cast<unsigned>(time(nullptr)));
    //Valores "altura" e "largura" Irao ser removidos dps, so estao ca para fases de testes
    interfaceClassTesting a(10, 10, 1, 1);
}


/*
 * Coisas q fiz ->
 *  IDs das classes automaticas
 *  classes das regras (mudei as funcoes para o regras.h, e apenas enviei o max e min nos filhos) (em alguns dos filhos fiz overright as funcoes pq n tem max ou n tem min)
 * */