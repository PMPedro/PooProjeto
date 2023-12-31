//
// Created by pmanu on 31/12/2023.
//

#ifndef POOPROJETO_REGRAIT_H
#define POOPROJETO_REGRAIT_H


class regrait {
private:
    int value1;
    int value2;

public:
    regrait(int value1, int value2 = 999);

    virtual bool rule(int valor_a_comparar);

    int getvalor1();
    int getvalor2();



};


#endif //POOPROJETO_REGRAIT_H
