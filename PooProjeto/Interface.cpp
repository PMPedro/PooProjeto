//
// Created by diogo on 12/21/2023.
//

#include "Interface.h"
#include <sstream>
#include <fstream>

std::vector<std::string> Interface::leFicheiro(const std::string& nFicheiro){
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
//Funções para verificar a sintaxe dos comandos com mais do que a keyword
bool Interface::veriAvanca(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int n;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> n) || iss.get() != EOF)  {
        return false;
    }
/*
    if(iss >> std::ws){
        return false;
    } */
    return true;
}

bool Interface::veriHnova(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int nLinhas, nColunas;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> nLinhas >> nColunas) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriZnova(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int linha, coluna;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> linha >> coluna) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriZrem(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriZcomp(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriZprops(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriPmod(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, valor;
    std::string nome;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> nome >> valor) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriCnovo(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;
    char tipo;
    std::string cmd;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> tipo >> cmd) || iss.get() != EOF)  {
        return false;
    }

    if(tipo != 's' && tipo != 'p'&& tipo != 'a'){
        return false;
    }
    return true;
}

bool Interface::veriCrem(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, id;
    char tipo;
    std::string cmd;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> tipo >> id) || iss.get() != EOF)  {
        return false;
    }

    if(tipo != 's' && tipo != 'p'&& tipo != 'a'){
        return false;
    }
    return true;
}

bool Interface::veriRnova(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras, idSensor,conta = 0;
    std::string regra;
    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> regra >> idSensor))  {
        return false;
    }

    std::vector<std::string> parametros;
    std::string param;

    while(iss >> param){
        parametros.push_back(param);
        ++conta;
    }

    if (conta == 0){
        return false;
    }else if(!iss.eof()){
        return false;
    }
    return true;
}

bool Interface::veriPmuda(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras;
    std::string novoComando;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> novoComando) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriRlista(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriRrem(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras, idRegra;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> idRegra) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriAsoc(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras, idAparelho;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> idAparelho) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriAdes(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras, idAparelho;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> idAparelho) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriAcom(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idAparelho;
    std::string cmd;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idAparelho >> cmd) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriPsalva(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, idProcRegras;
    std::string nome;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> idProcRegras >> nome) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriPrepoe(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    std::string nome;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> nome) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

bool Interface::veriPrem(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    std::string prem;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> prem) || iss.get() != EOF)  {
        return false;
    }

    return true;
}

std::string Interface::veriExec(const std::string& comando) {
    std::istringstream iss(comando);

    std::string keyword;
    std::string nFich;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> nFich) || iss.get() != EOF)  {
        return "Syntax Error";
    }

    return nFich;
}

std::string Interface::limpaComando(const std::string&comando){
    std::string final = comando;
    int pos = final.find(' ');
    if(pos !=std::string::npos){
        final = final.substr(0,pos);
        return final;
    }else{
        return comando;
    }
}

std::vector<std::string> Interface::trataComando(const std::string&comando){
    std::string limpo = limpaComando(comando);
    //std::cout << "Comando limpo: "<< limpo<< std::endl;
    if(comando == "prox"){
        //executa prox
        return {"true"};
    }else if(comando == "hrem"){
        //executa hrem
        return {"true"};
    }else if(comando == "zlista"){
        //executa zlista
        return {"true"};
    }else if(comando == "plista"){
        //executa plista
        return {"true"};
    }else if(limpo == "avanca"){
        if(veriAvanca(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "hnova"){
        if(veriHnova(comando)){
            //execHnova(comando);
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "znova"){
        if(veriZnova(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "zrem"){
        if(veriZrem(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "zcomp"){
        if(veriZcomp(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "zprops"){
        if(veriZprops(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "pmod"){
        if(veriPmod(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "cnovo"){
        if(veriCnovo(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "crem"){
        if(veriCrem(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "rnova"){
        if(veriRnova(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "pmuda"){
        if(veriPmuda(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "rlista"){
        if(veriRlista(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "rrem"){
        if(veriRrem(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "asoc"){
        if(veriAsoc(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "ades"){
        if(veriAdes(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "acom"){
        if(veriAcom(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "psalva"){
        if(veriPsalva(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "prepoe"){
        if(veriPrepoe(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "prem"){
        if(veriPrem(comando)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "exec"){
        std::string result = veriExec(comando);
        if(result == "Syntax Error"){
            return {"false"};
        }else{
            std::vector<std::string> resVector = leFicheiro(result);

            if (resVector[0] == "OP_ERROR"){//n conseguiu abrir
                return {"false"};
            }else{
                return resVector; //deu certo
            }
        }
    }
    return {"false"};
}


