//
// Created by diogo on 12/21/2023.
//

#include "Interface.h"
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "comandosOutput.h"

std::vector<std::string> Interface::leFicheiro(const std::string& nFicheiro , int *instante, cWindow *listComandos, Habitacao *casa, vector <cWindow*> cZonas, int &flag, int &flag2){
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
        trataLinha = trataComando(linha, instante, listComandos, casa, cZonas, flag,flag2);


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
bool Interface::veriAvanca(const std::string& comando, int *instante) {
    std::istringstream iss(comando);

    std::string keyword;
    int n;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> n) || iss.get() != EOF)  {
        return false;
    }
    (*instante) += n;
/*
    if(iss >> std::ws){
        return false;
    } */
    return true;
}

bool Interface::veriHnova(const std::string& comando, Habitacao *casa, vector <cWindow*> &cZonas) {
    std::istringstream iss(comando);

    std::string keyword;
    int nLinhas, nColunas;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> nLinhas >> nColunas) || iss.get() != EOF)  {
        return false;
    }

    if ((nLinhas >= 2 && nLinhas <= 4) && (nColunas >= 2 && nColunas <= 4)) {
        casa->setDimensaoX(nLinhas);
        casa->setDimensaoY(nColunas);

        // Calculate window dimensions based on grid size
        int cellWidth = 9;
        int cellHeight = 18;

        int xOffset = 0; // Adjust this value based on the desired horizontal spacing
        int yOffset = 1; // Adjust this value based on the desired vertical spacing
        int conta = 1;
        for (int i = 0; i < nColunas; ++i) {
            for (int j = 0; j < nLinhas; ++j) {
                int x = j * (cellWidth + xOffset);
                int y = i * (cellHeight + yOffset);

                // Adjust window creation as needed
                auto* newWindow = new cWindow(cellWidth, cellHeight, x, y);
                // Push the pointer to the new window into the vector
                (*newWindow) << "[" + to_string(conta) + "]";
                cZonas.push_back(newWindow);
                conta++;
            }
        }
    }
    return true;
}

bool Interface::veriZnova(const std::string& comando, Habitacao *casa, vector <cWindow*>& cZonas) {
    std::istringstream iss(comando);

    std::string keyword;
    int linha, coluna;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> linha >> coluna) || iss.get() != EOF)  {
        return false;
    }
    //int index = (coluna - 1) * casa->getDimX() + (linha - 1);
    int index = (linha - 1) + (coluna - 1) * casa->getDimX();
    //verifica se existe uma casa
    if(casa != nullptr){
        vector<Zona> auxiliar = casa->getZonas();
        if (!auxiliar.empty()) {
            for (const auto& auxil : auxiliar) {
                if (auxil.getposy() == coluna && auxil.getposx() == linha) {
                    return false;
                }
            }
        }
    }

    if(index > casa->getDimY() * casa->getDimX()){
        return false;
    }else{
        int id = rand() % 1000 + 1;
        //casa->addZonas(linha, coluna, "C");
        Zona h("", linha, coluna); //cria uma zona auxiliar
        Propriedade aux; //cria as propriedades para essa zona
        aux.inilerSensores(); //inicializa as propriedades com valores random
        h.setPropriedades(aux); //adiciona as propriedades a zona aux criada
        Processador procaux;

        //procaux.addRegra()



        (*casa).addZonas(h); //adiciona a zona á habitacao
        string nome = "[Zona -> ";
        nome += to_string(index + 1);
        nome += "]";
        (*cZonas[index]) << nome;
    }
    return true;
}

bool Interface::veriZrem(const std::string& comando, Habitacao *casa, vector <cWindow*> &cZonas) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }

    vector<Zona> aux;
    aux = (*casa).getZonas();
    int w, h;
    //int index = (linha - 1) + (coluna - 1) * casa->getDimX();
    if(!(aux.empty())){
        for(int j = 0; j < aux.size(); j++){
            if(aux[j].getId() == idZona){
                w = aux[j].getposx();
                h = aux[j].getposy();
                int index = (w - 1) + (h - 1) * casa->getDimX();
                cout << index;
                casa->removeZona(j);
                (*cZonas[index]).clear();
                string nome = "[";
                nome += to_string(index + 1);
                nome += "]";
                (*cZonas[index]) << nome;
                return true;
            }
        }
        return false;
    }


    /*if(!(aux.empty())){
    for(int j = 0; j < aux.size(); j++){

        if(aux[j].getId() == idZona ){
            w = aux[j].getposx();
            h = aux[j].getposy();
            (cZonas)[j]->totalClear();
        }

    }
    }
*/
    /*if(!((cZonas).empty())){
        for(int i; i < (cZonas).size();i++){
       if(((cZonas)[i]->getW() == w) && ((cZonas)[i]->getH() == h))
           (cZonas)[i]->totalClear();
        }
    }
*/
    return true;
}

bool Interface::veriZcomp(const std::string& comando, Habitacao *casa, cWindow *listComando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }
    vector <Sensor> s1;
    vector <Aparelho> a1;
    vector <Processador> p1;
    vector <Zona> aux;

aux = (*casa).getZonas();
bool found = false;
if(!(aux.empty())){
    for(int i = 0; i < aux.size(); i++){
        s1 = aux[i].getSensor();
        found = true;
        if(aux[i].getId() == idZona){
        if((s1.empty()))
            (*listComando) << "Nao existem Sensores na zona " + to_string(idZona);
        a1 = aux[i].getAparelho();
        if((a1.empty()))
            (*listComando) << "Nao existem Aparelhos na zona " + to_string(idZona);
        p1 = aux[i].getProcessador();
        if((p1.empty()))
            (*listComando) << "Nao existem Processadores na zona " + to_string(idZona);

        if(!(s1.empty()))
            (*listComando) << s1[i].getId();
        if(!(a1.empty()))
            (*listComando) << a1[i].getId();
        if(!(p1.empty()))
            (*listComando) << p1[i].getId();
        }
    }
}
if(found == false)
    (*listComando) <<"Zona com id " << idZona << "Nao encontrado";
    return true;
}

bool Interface::veriZprops(const std::string& comando, Habitacao *casa ,cWindow *listComandos) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona) || iss.get() != EOF)  {
        return false;
    }
    vector <Zona> aux;
    aux = (*casa).getZonas();
    Propriedade auxP;


    int found = false;
    if(!(aux.empty())){
        for(int i = 0; i < aux.size(); i++){
            if(aux[i].getId() == idZona){
                found = true;
                auxP = aux[i].getPropriedades();
                (*listComandos) << "";
                (*listComandos) << "Propriedades da Zona " + to_string(idZona) + ":";
                (*listComandos) << "";
                (*listComandos) << "\tTemperatura - " + to_string(auxP.getTemp());
                (*listComandos) << "\tLuz - "  + to_string(auxP.getLuz());
                (*listComandos) << "\tSom - " + to_string(auxP.getSom());
                (*listComandos) << "\tHumidade - " + to_string(auxP.getHumidade());
                (*listComandos) << "\tRadiacao - " + to_string(auxP.getRad());
                (*listComandos) << "\tFumo - " + to_string(auxP.getFumo());
                (*listComandos) << "\tVibracao - " + to_string(auxP.getVibracao());
                break;
            }
        }
    }

    if(!found){
        (*listComandos) << "Zona com id " + to_string(idZona) + " nao encontrada!";
    }
    return true;
}

bool Interface::veriPmod(const std::string& comando, Habitacao *casa, cWindow *listComando) {
    std::istringstream iss(comando);

    std::string keyword;
    int idZona, valor;
    std::string nome;

    //se a extração falhar ou se existirem mais cenas depois do n
    if (!(iss >> keyword >> idZona >> nome >> valor) || iss.get() != EOF)  {
        return false;
    }

    vector <Zona> aux;
    aux = (*casa).getZonas();
    Propriedade auxP;
    bool found;
    vector <Processador> auxProc;
    if(!(aux.empty())){
        for(int i = 0; i < aux.size(); i++){
            if(aux[i].getId() == idZona){
                found = true;
                auxP = aux[i].getPropriedades(); //vamos buscar todas as propriedades q essa zonas conte
                //vamos dar update apenas a q o user pretende
                if(nome == "t"){ SensorTemperatura a(valor); auxP.setTemp(a);    }
                if(nome == "v"){ sensorVibracao a(valor); auxP.setVibracao(a);   }
                if(nome == "m"){sensorLuz a(valor); auxP.setLuz(a);}
                if(nome == "d"){sensorRadiacao a(valor); auxP.setRad(a);}
                if(nome == "h"){sensorHumidade a(valor); auxP.setHumidade(a);}
                if(nome == "o"){sensorSom a(valor); auxP.setSom(a);}
                if(nome == "f"){sensorFumo a(valor); auxP.setFumo(a);}
                //como alteramos apenas 1 propriedades, voltamos a mandar as propriedades antigas (q agr contem o valor da nova update) e damos replace a zona com o valor da nova propriedade
                aux[i].setPropriedades(auxP);
                (*casa).replaceZona(idZona, aux[i]);
                (*listComando) << "\nAlteracao efetuada com Sucesso!";
            }
        }
    }

    if(found == false){
        (*listComando) << "\nAlteracao nao foi efetuada! No foi encontrado nenhuma zona com esse Id";
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

std::vector<std::string> Interface::trataComando(const std::string&comando, int *instante, cWindow *listComandos, Habitacao *casa, vector <cWindow*> &cZonas, int &flag, int &flag2){
    std::string limpo = limpaComando(comando);
    comandosOutput controlerComandos;
    //std::cout << "Comando limpo: "<< limpo<< std::endl;

    if(comando == "prox"){ //===================================================kinda feito muda o instante mas ainda n altera os objetos
        //executa prox
        controlerComandos.prox(instante);
        return {"true"};
    }else if(comando == "hrem"){ //===================================================Feito
        (*listComandos) << "Habitacao Apagada!";
        controlerComandos.hrem(casa, cZonas);
        flag = 1;
        return {"true"};
    }else if(comando == "zlista"){
        //executa zlista
        controlerComandos.zLista(listComandos, casa);
        return {"true"};
    }else if(comando == "plista"){
        //executa plista
        return {"true"};
    }else if(limpo == "avanca"){
        if(veriAvanca(comando, instante)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "hnova"){//===================================================Feito
        if(flag2 == 1){
            controlerComandos.hrem(casa, cZonas);
            (*listComandos) << "Habitacao refeita!";
            flag2 = 0;
        }
        if(veriHnova(comando, casa, cZonas)){
            //execHnova;
            flag2 = 1;
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "znova"){//===================================================Feito
        if(veriZnova(comando, casa, cZonas)){

            //execAvanca();veriZnova
            return {"true"};
        }else{
            (*listComandos) << "Impossivel adicionar Zona!";
            return {"false"};
        }
    }else if(limpo == "zrem"){
        if(veriZrem(comando, casa, cZonas)){
            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "zcomp"){
        if(veriZcomp(comando, casa, listComandos )){

            //execAvanca();
            return {"true"};
        }else{
            return {"false"};
        }
    }else if(limpo == "zprops"){
        if(veriZprops(comando, casa, listComandos)){

            //execAvanca();
            return {"true"};

        }else{
            return {"false"};
        }
    }else if(limpo == "pmod"){
        if(veriPmod(comando, casa, listComandos)){
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
            std::vector<std::string> resVector = leFicheiro(result, instante, listComandos, casa, cZonas, flag, flag2);

            if (resVector[0] == "OP_ERROR"){//n conseguiu abrir
                return {"false"};
            }else{
                return resVector; //deu certo
            }
        }
    }
    return {"false"};
}