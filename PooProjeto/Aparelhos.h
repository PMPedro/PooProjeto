//
// Created by pmanu on 28/10/2023.
//

#ifndef TP_APARELHOS_H
#define TP_APARELHOS_H


class Aparelho {
    bool aquecedor;
    bool aspersor;
    bool refrigerador;
    bool lampada;
public:
    Aparelho();

    void onOfAquecedor();
    void onOfAspersor();
    void onOfRefrigerador();
    void onOfLampada();

    const bool getStateAquecedor();
    const bool getStateAspersor();
    const bool getStateRefrigerador();
    const bool getStateLampada();


    //Da para ligar e desligar cada aparelho (true / false)
    //Ao ligar e desligar tem efeitos
    /*
     ==*aquecedor==
     *|ligado|
         *  Adiciona um grau celsius à
            temperatura da zona por cada 3
            instantes até ao máximo de 50º, e
            adiciona 5 db de ruído uma única vez
     *
     * |Desligado|
         *  remove 5 db de
            ruído
     *
     * ==aspersor==
     *|ligado|
             *No primeiro instante de ligado (ou
                seja, uma única vez por período em
                que está ligado):
                - Adiciona 50% de humidade relativa,
                até ao máximo de 75% de humidade.
                - Adiciona vibração de 100 Hz.
                Coloca o fumo a 0 uma única vez no
                segundo instante
     * |Desligado|
                 *remove 100 Hz de vibração
                 *
                 *
     * ==refrigerador==
     *|ligado|
                 *Remove um grau celsius à
                temperatura da zona a cada 3
                instantes ligado e adiciona 20 db de
                ruído no primeiro instante de ligado.
      * |Desligado|
            *remove 20 db de ruído
     *
     * ==lampada==
         *|ligado|
     *          Adiciona 900 lúmens uma única vez
                por período em que está ligado
     * |Desligado|
                *remove 900 lúmens
     */

//podem seer comandados pelo user
};


#endif //TP_APARELHOS_H
