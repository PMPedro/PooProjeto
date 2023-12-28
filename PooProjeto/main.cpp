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
 *      os que tem (*) no fianl e pq falta meter mais bonito, ou tratar certos detalhes
 * */
/*
 * Comandos já feitos ->
 *  Avanca n
 *  hnova
 *  prox
 *  znova (falta acionar id ao criar zona)
 *  zrem
 *  zlista
 *
 * */

/**
 * N percebi bem o q e para fzr
 * rnova(
 */

/* J feitos mas precisam de alteracoes pq estao a dar mal / sao mais complicados
 * hrem
 *
 * */
/*
 * Coisas princiapis q faltal fazer->
 *  Meter ponteiros inteligentes nas classes
 *  Tratar dos ids (fazerlos acrescemtar sozinhos)
 *  Acabar os comandos
 *  Tratar dos Destructors (la no fundo tb e os ponteiros inteligentes) 
 * */