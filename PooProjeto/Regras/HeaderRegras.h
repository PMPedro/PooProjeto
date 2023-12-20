//
// Created by pmanu on 19/12/2023.
//

#ifndef POOPROJETO_HEADERREGRAS_H
#define POOPROJETO_HEADERREGRAS_H
//Cada regra vai ter valores max e minimos diferentes, por exemplo, Humidade vai de 0 - 100%, a temperatura vai de  (-273 ) -> Infinito, dai ter de haver mts classes
//Funcoes de x e Y vao estar em regras, em cada class tem q se ir verificar o valor de X e Y, e ver se esta dentro dos limites, se n estiver , muda-se o valor
//Header file server para n ter de fzr mts includes no futuro, para no processador por exemplo, n termos de fazer uns 100 includes


//cada class tem os minimos e masx possiveis a ser verificados
//agr o Procvessador vai processar as regras todas de acordo com os comandos do user

#include "regrasFumo.h"
#include "regrasHumidade.h"
#include "regrasLuz.h"
#include "regrasRadiacao.h"
#include "regrasSom.h"
#include "regrasTemperatura.h"
#include "regrasVibracao.h"
#endif //POOPROJETO_HEADERREGRAS_H
