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
        Sensor.h
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
        Sensores/headerSensores.h
        MyPointer.cpp
        MyPointer.h
        Regras/regrasHumidade.cpp
        Regras/regrasHumidade.h
        Regras/HeaderRegras.h
        Regras/regrasFumo.cpp
        Regras/regrasFumo.h
        Regras/regrasLuz.cpp
        Regras/regrasLuz.h
        Regras/regrasRadiacao.cpp
        Regras/regrasRadiacao.h
        Regras/regrasSom.cpp
        Regras/regrasSom.h
        Regras/regrasVibracao.cpp
        Regras/regrasVibracao.h
        Regras/regrasTemperatura.cpp
        Regras/regrasTemperatura.h
        Interface.cpp Interface.h
        interfaceClassTesting.cpp
        interfaceClassTesting.h
        window.cpp
        window.h
        CicloTratarComandos.cpp
        CicloTratarComandos.h
        comandosOutput.cpp
        comandosOutput.h
        Aparelhos/Aspersor.cpp
        Aparelhos/Aspersor.h
        Aparelhos/Aquecedor.cpp
        Aparelhos/Aquecedor.h
        Aparelhos/Refrigerador.cpp
        Aparelhos/Refrigerador.h
        Aparelhos/Lampada.cpp
        Aparelhos/Lampada.h
        Aparelhos/headerAparelhos.h utils.h utils.h utils.cpp
        regrasitself/regrait.cpp
        regrasitself/regrait.h
        regrasitself/RegraEqual.cpp
        regrasitself/RegraEqual.h
        regrasitself/regrabetween.cpp
        regrasitself/regrabetween.h
        regrasitself/rfora.cpp
        regrasitself/rfora.h
        regrasitself/maiorq.cpp
        regrasitself/maiorq.h
        regrasitself/menorq.cpp
        regrasitself/menorq.h
        regrasitself/typesRules.h
)


#target_link_libraries(${PROJECT_NAME} C:/Users/pmanu/Desktop/3Ano/Poo/TP/PooProjeto/PooProjeto/PDCurses-3.9/wincon/pdcurses.a)
# Assuming PDCurses files are in the "external" folder
target_link_libraries(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/external/PDCurses-3.9/wincon/pdcurses.a)



