//
// Created by pmanu on 28/10/2023.
//

#include "Propriedades.h"


Propriedade::Propriedade(Data temp, Data luz, Data rad, Data vib, Data hum, Data fum, Data som) {
    this->fumo.setPropriedades(fum);
    this->humidade.setPropriedades(hum);
    this->vibracao.setPropriedades(vib);
    this->radiacao.setPropriedades(rad);
    this->luz.setPropriedades(luz);
    this->temperatura.setPropriedades(temp);
    this->som.setPropriedades(som);
}

void Propriedade::inilerSensores(SensorTemperatura temp, sensorLuz luz, sensorRadiacao rad, sensorVibracao vib,
                                 sensorHumidade humidade, sensorSom som, sensorFumo fumo) {
    this->temperatura = temp.get_valortemp();
    this->som = som.getSom();
    this->humidade = humidade.getHumidade();
    this->luz = luz.getLuiz();
    this->radiacao = rad.getRad();
    this->vibracao = vib.getValorVibracao();
    this->fumo = fumo.getFumo();

}


int Propriedade::getFumo() {
    return this->fumo.getQuantidade();
}

int Propriedade::getRad() {
    return this->fumo.getQuantidade();
}

int Propriedade::getHumidade() {
    return this->humidade.getQuantidade();
}

int Propriedade::getSom() {
    return this->som.getQuantidade();
}

int Propriedade::getLuz() {
    return this->som.getQuantidade();
}

int Propriedade::getTemp() {
    return this->temperatura.getQuantidade();
}

void Propriedade::setTemp(int x) {
    this->temperatura.setQuantidade(x);
}

void Propriedade::setSom(int x) {
    this->som.setQuantidade(x);
}

void Propriedade::setFumo(int x) {
    this->fumo.setQuantidade(x);
}

void Propriedade::setHumidade(int x) {
    this->humidade.setQuantidade(x);
}

void Propriedade::setLuz(int x) {
    this->luz.setQuantidade(x);
}

void Propriedade::setRad(int x) {
    this->radiacao.setQuantidade(x);
}

void Propriedade::setTemp(SensorTemperatura x) {
    this->temperatura = x.get_valortemp();
}

void Propriedade::setRad(sensorRadiacao x) {
    this->radiacao = x.getRad();
}

void Propriedade::setLuz(sensorLuz x) {
    this->luz = x.getLuiz();
}

void Propriedade::setHumidade(sensorHumidade x) {
    this->humidade = x.getHumidade();
}

void Propriedade::setFumo(sensorFumo x) {
    this->fumo = x.getFumo();
}

void Propriedade::setSom(sensorSom x) {
    this->som = x.getSom();
}

int Propriedade::getVibracao() {
    return this->vibracao.getQuantidade();
}

void Propriedade::setVibracao(int x) {
    this->vibracao.setQuantidade(x);
}

void Propriedade::setVibracao(sensorVibracao x) {
    this->vibracao = x.getValorVibracao();
}









