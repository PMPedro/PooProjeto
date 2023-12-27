//
// Created by pmanu on 22/12/2023.
//

#ifndef POOPROJETO_WINDOW_H
#define POOPROJETO_WINDOW_H

#include "iostream"
#include "Terminal.h"
#include "string"


using namespace term;
using namespace std;


class cWindow {
private:
    WINDOW *window = NULL;
    int posX;
    int posY;
public:

    cWindow(int x, int y, int w, int h);
    void setWindow(int x, int y, int w, int h, string text);

    cWindow& operator<<(const std::string& str);
    cWindow& operator>>(std::string& str);
    cWindow& operator<<(const int& valor);



    void clear();
    void totalClear();
    int getW();
    int getH();
};

#endif //POOPROJETO_WINDOW_H
