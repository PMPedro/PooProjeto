//
// Created by diogo on 11/24/2023.
//

#include "Leitura.h"
#include "Validacao.h"

std::vector<std::string> leFicheiro(const std::string& nFicheiro){
    std::ifstream ifich(nFicheiro);
    std::string linha;
    std::vector<std::string> resultado;
    std::vector<std::string> trataLinha;
    if (!ifich.is_open()) {
        std::cerr << "Erro na Abertura: " << nFicheiro << std::endl;
        return {"OP_ERROR"};//codigo para erro de abertura(inventado agr haha)
    }


    while(getline(ifich,linha)){

        trataLinha.clear();
        trataLinha = trataComando(linha);


        if (trataLinha[0] == "true"){
            resultado.push_back("Comando '" + linha + "' validado\n");
        }else if(trataLinha[0] == "false"){
            continue;
        }
    }
    ifich.close();
    return resultado;
}
