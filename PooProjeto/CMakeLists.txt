cmake_minimum_required(VERSION 3.26)
project(PooProjeto)

set(CMAKE_CXX_STANDARD 23)

add_executable(PooProjeto main.cpp
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
        Habitacao.h
        Terminal.h
        Terminal.cpp
        curses.h
        Data.cpp
        Data.h
)

target_link_libraries(${PROJECT_NAME} C:/PDCurses-3.9/wincon/pdcurses.a)
