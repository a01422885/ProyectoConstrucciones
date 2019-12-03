//
//  Costos.h
//  proyecto
//
//  Created by Matías Ricardo Méndez Sandoval on 28/11/19.
//  Copyright © 2019 Matías Ricardo Méndez Sandoval. All rights reserved.
//

#ifndef Costos_h
#define Costos_h
#include "Construcciones.h"
#include <math.h>
using namespace std;
//No ocupare setters para los atributos privados ya que los costos por litro y por Killowatts son costos privados que el usuario externo d¡no debe poder manipular, por eso solamente puse getters, para que el usuario externo pueda conocerlos, mas no modificarlos
class Costos {
    private:
        float costoLitro, costoKWh;
    public:
        Costos();
        float getCostoLitro();
        float getCostoKWh();
        float costoAguaEdifi(Edificios &e);
        float costoAguaEdific;
        float costoEnergiaEdifi(Edificios &e);
        float costoEnergiaEdific;
        float costoAguaFracc(Fraccionamiento &f, Casa p);
        float costoAguaFracci;
        float costoEnergiaFracc(Fraccionamiento &f, Casa p);
        float costoEnergiaFracci;
        float costoAguaCasa(Casa &c);
        float costoAguaCasaC;
        float costoEnergiaCasa(Casa &c);
        float costoEnergiaCasaC;
};

float Costos::getCostoLitro(){return costoLitro;}

float Costos::getCostoKWh() {return costoKWh;}

Costos::Costos(){
    costoKWh = 0.00007;
    costoLitro =0.05;
}


float Costos::costoAguaEdifi(Edificios &e){
    e.gastoAguaEdi();
    costoAguaEdific = costoLitro*e.AguaEdi;
    return costoAguaEdific;
}

float Costos::costoEnergiaEdifi(Edificios &e){
    e.gastoEnergia();
    costoEnergiaEdific = e.gEnergia*costoKWh;
    return costoAguaEdific;
}


float Costos::costoAguaFracc(Fraccionamiento &f, Casa p){
    f.gastoAguaFracc(p);
    costoAguaFracci = f.gastoAguaFraccT*costoLitro;
    return costoAguaFracci;
}

float Costos::costoEnergiaFracc(Fraccionamiento &f, Casa p){
    f.gastoEnergiaFracc(p);
    costoEnergiaFracci =f.gastoEnergiaFraccT*costoKWh;
    return costoEnergiaFracci;
}

float Costos::costoAguaCasa(Casa &c){
    c.gastoAguaCasa();
    costoAguaCasaC = c.gastoAguaCasaT*costoLitro;
    return costoAguaCasaC;
}

float Costos::costoEnergiaCasa(Casa &c){
    c.gastoEnergia();
    costoEnergiaCasaC = c.gEnergia*costoKWh;
    return costoEnergiaCasaC;
    
    
}
#endif /* Costos_h */
