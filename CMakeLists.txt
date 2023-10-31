cmake_minimum_required(VERSION 3.26)
project(TP)

set(CMAKE_CXX_STANDARD 23)

add_executable(TP main.cpp
        Regras.cpp
        Regras.h
        Processador.cpp
        Processador.h
        Aparelhos.cpp
        Aparelhos.h
        Sensores.cpp
        Sensores.h
        Propriedades.cpp
        Propriedades.h
        Zonas.cpp
        Zonas.h
        Habitacao.cpp
        Habitacao.h)
