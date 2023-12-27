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
    //Valores "altura" e "largura" Irao ser removidos dps, so estao ca para fases de testes
    interfaceClassTesting a(10, 10, 1, 1);
}

/*
 * Comandos já feitos ->
 *  Avanca n
 *  hnova
 *  prox
 *  znova (falta acionar id ao criar zona)
 *  zrem
 *
 * */

/* J feitos mas precisam de alteracoes pq estao a dar mal / sao mais complicados
 * hrem
 *
 * */