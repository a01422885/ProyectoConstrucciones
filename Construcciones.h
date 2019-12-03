//
//  Construcciones.h
//  proyecto
//
//  Created by Matías Ricardo Méndez Sandoval on 11/26/19.
//  Copyright © 2019 Matías Ricardo Méndez Sandoval. All rights reserved.
//

#ifndef Construcciones_h
#define Construcciones_h
using namespace std;

//La clase construcciones es una clase abstracta general para edificios y casas
class Construcciones{
private:
    float h;
    float area;
    int ocupacion;
    int dias;
    
public:
    Construcciones();
    Construcciones(float, float, int, int);
    //todo se calculara en un mes
    float getH();
    void setH(float);
    float getArea();
    void setArea(float);
    int getOcupacion();
    void setOcupacion(int);
    float getTon();
    void setTon(float);
    int getDias();
    void setDias(int);
    float gastoAgua();
    float gAgua;
    float gastoEnergia(); //kWh al mes
    float gEnergia;
    float ton;
    float toneladas();
};

Construcciones::Construcciones (){
    h = 0;
    area = 0;
    ocupacion = 0;
    dias = 0 ;
}

Construcciones::Construcciones (float _h, float _area, int _ocupacion, int _dias){
    h = _h;
    area = _area;
    ocupacion = _ocupacion;
    dias = _dias;
}
void Construcciones::setH(float _h){ h = _h;}
float Construcciones::getH(){ return h;}

void Construcciones::setArea(float _area){ area = _area;}
float Construcciones::getArea(){ return area;}

void Construcciones::setOcupacion(int _ocupacion){ ocupacion = _ocupacion;}
int Construcciones::getOcupacion(){ return ocupacion;}


void Construcciones::setDias(int _dias){ dias = _dias;}
int Construcciones::getDias() { return dias;}



float Construcciones::gastoAgua(){
    gAgua= (((area*h*0.02*(ocupacion*110)))*dias);
    return gAgua;
}

float Construcciones::gastoEnergia(){
    gEnergia = ((ocupacion*300)+(area*h*0.54)+620)*dias;
    return gEnergia;
}

float Construcciones::toneladas(){
    ton = (0.28*area*h);
    return ton;
}

//Herencia de clase contrucciones
class Edificios: public Construcciones{
    private:
        int nPisos;
        int banos;
    public:
        Edificios (float, float, float, float, int, int);
        float gastoAguaEdi();
        float AguaEdi;
};


Edificios::Edificios (float _h, float _area, float _ocupacion, float _dias, int _nPisos, int _banos) : Construcciones ( _h, _area, _ocupacion, _dias){
    nPisos = _nPisos;
    banos = _banos;
}

float Edificios::gastoAguaEdi(){
    gastoAgua();
    AguaEdi = gAgua + (gAgua*nPisos*0.12) + (gAgua*banos*0.24) ;
    return AguaEdi;
}

//**************************
/*Constructor hijo( variable_padre, variable_hijo) : padre (variable_padre SIN TIPO DE VARIABLE) //obvio tipo de variable también y suponiendo que quieres ocupar dos variables
 variable_hijo= _variable_hijo;
 //no tienes que poner las del padre porque ya la heredaste*/

//Class hijo :public Padre{


//Se está indicando que "Casa" será una herencia de "Construcciones".
class Casa: public Construcciones {
    //no necesito declarar las variables de arriba, solo las variables de los valores que devolveré
    private:
        bool jardin;
    public:
        Casa ();
        Casa (float, float, float, float, bool);
        float gastoAguaCasa();
        float gastoAguaCasaT;
    
};
Casa::Casa () : Construcciones () {
    jardin = false;
}


Casa::Casa (float _h, float _area, float _ocupacion, float _dias, bool _jardin) : Construcciones ( _h, _area, _ocupacion, _dias) {
    jardin = _jardin;
}

float Casa::gastoAguaCasa(){
    if (jardin==true) {
        gastoAgua();
        gastoAguaCasaT = gAgua + (gAgua*0.18);}
    else{
        gastoAgua();
    }
    return gastoAguaCasaT;
}

//La clase Fraccionamiento estará compuesta por objetos de la clase Casa
class Fraccionamiento {
    protected:
        Casa c; //estoy declarando que los objetos de la clase Casa seran componentes de fraccionamiento
        int nCasas;
        bool golf;
        Casa listaCasas[200];
        int tLista;
    public:
        Fraccionamiento();
        Fraccionamiento(Casa,bool);
        void agrega_casa(Casa);
        float gastoAguaFracc(Casa c);
        float gastoAguaFraccT;
        float gastoEnergiaFracc(Casa c);
        float gastoEnergiaFraccT;
        int getNCasas();
    
};

Fraccionamiento::Fraccionamiento(){
    Casa c(0,0,0,0,false);
    nCasas = 0;
    golf = false;
    tLista = 0;
}

Fraccionamiento::Fraccionamiento(Casa _c, bool _golf){
    c = _c;
    //nCasas = _nCasas;
    golf = _golf;
}

void Fraccionamiento::agrega_casa(Casa c){
    listaCasas[tLista] = c;
    tLista++;
}

float Fraccionamiento::gastoAguaFracc(Casa c){
    c.gastoAguaCasa();
    gastoAguaFraccT = c.gastoAguaCasaT*tLista;
    if(golf == true){
        gastoAguaFraccT = gastoAguaFraccT + (gastoAguaFraccT*207.7);
    }else{
        gastoAguaFraccT = gastoAguaFraccT+0;
    }
    return gastoAguaFraccT;
}

float Fraccionamiento::gastoEnergiaFracc(Casa c){
    c.gastoEnergia();
    gastoEnergiaFraccT = c.gEnergia*nCasas;
    if(golf == true){
        gastoEnergiaFraccT = gastoEnergiaFraccT + (gastoEnergiaFraccT*188.67);
    }else{
        gastoEnergiaFraccT = gastoEnergiaFraccT+0;
    }
    return gastoEnergiaFraccT;}


int Fraccionamiento::getNCasas() { return tLista;}
    



#endif /* Construcciones_h */
