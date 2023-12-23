//
// Created by pmanu on 28/10/2023.
//

#include "Propriedades.h"
#include "Sensores/headerSensores.h"


Propriedade::Propriedade(Data temp, Data luz, Data rad, Data vib, Data hum, Data fum, Data som) {
    this->fumo.setPropriedades(fum);
    this->humidade.setPropriedades(hum);
    this->vibracao.setPropriedades(vib);
    this->radiacao.setPropriedades(rad);
    this->luz.setPropriedades(luz);
    this->temperatura.setPropriedades(luz);
    this->som.setPropriedades(som);
}

void Propriedade::lerSensores(SensorTemperatura temp, sensorLuz luz, sensorRadiacao rad, sensorVibracao vib,
                              sensorHumidade humidade, sensorFumo, sensorSom som, sensorFumo fumo) {
    this->temperatura = temp.get_valortemp();
    this->som = som.getSom();
    this->humidade = humidade.getHumidade();
    this->luz = luz.getLuiz();
    this->radiacao = rad.getRad();
    this->vibracao = vib.getValorVibracao();
    this->fumo = fumo.getFumo();
}


