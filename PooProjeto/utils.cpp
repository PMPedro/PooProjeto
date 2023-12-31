//
// Created by diogo on 12/30/2023.
//
#include "utils.h"
std::string limpaComando(const std::string&comando){
    std::string final = comando;
    int pos = final.find(' ');
    if(pos !=std::string::npos){
        final = final.substr(0,pos);
        return final;
    }else{
        return comando;
    }
}