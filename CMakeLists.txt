cmake_minimum_required(VERSION 3.26)
project(PooProjeto)

set(CMAKE_CXX_STANDARD 14)

include_directories(Projeto)

add_executable(PooProjeto
        Projeto/Aparelhos.cpp
        Projeto/Aparelhos.h
        Projeto/Habitacao.cpp
        Projeto/Habitacao.h
        Projeto/main.cpp
        Projeto/Processador.cpp
        Projeto/Processador.h
        Projeto/Propriedades.cpp
        Projeto/Propriedades.h
        Projeto/Regras.cpp
        Projeto/Regras.h
        Projeto/Sensores.cpp
        Projeto/Sensores.h
        Projeto/Terminal.cpp
        Projeto/Terminal.h
        Projeto/Zonas.cpp)
