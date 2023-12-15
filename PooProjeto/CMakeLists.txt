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
        Validacao.cpp Validacao.h Leitura.cpp Leitura.h
        Sensores/sensTemperatura.cpp
        Sensores/sensTemperatura.h
        Sensores/sensorLuz.cpp
        Sensores/sensorLuz.h
        Sensores/sensorRadiacao.cpp
        Sensores/sensorRadiacao.h
        Sensores/sensorVibracao.cpp
        Sensores/sensorVibracao.h
        Sensores/sensorHumidade.cpp
        Sensores/sensorHumidade.h
        Sensores/sensorFumo.cpp
        Sensores/sensorFumo.h
        Sensores/sensorSom.cpp
        Sensores/sensorSom.h
        Sensores/headerSensores.h)


#target_link_libraries(${PROJECT_NAME} C:/Users/pmanu/Desktop/3Ano/Poo/TP/PooProjeto/PooProjeto/PDCurses-3.9/wincon/pdcurses.a)
# Assuming PDCurses files are in the "external" folder
target_link_libraries(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/external/PDCurses-3.9/wincon/pdcurses.a)



