//
//  main.cpp
//  construcciones
//
//  Created by Matías Méndez on 21/11/19.
//  Copyright © 2019 Matías Méndez. All rights reserved.
//

#include <iostream>   //para imprimir.
#include <math.h> //para potencias
#include "Construcciones.h"
#include "Costos.h"

using namespace std;



int main(){
    
    //debes crear los objetos luego luego después del main;
    
    /*cout << "A continuación siguen ejemplos de complejos arquitectónicos conocidos";
     //Caso sencillo de prueba para clase de Costos, aun debe de modificarse y aprender cosas nuevas para implementarse correctamente esta clase
     Costos Prueba1(30,58);
     cout << "\n" << "\n Costo de Energía por complejos arquitectónicos" << Prueba1.getCEE() << "\n" << "\n Costo de Agua por complejos arquitectónicos" << Prueba1.getCAE();*/
    
    //Casos de prueba para clase construcciones
    Construcciones EmpireState(310, 40000, 3500,10);
    //EmpireState.mostrarVariables2();
    cout << "\n" << "\n" << "Edificio: Empire State";
    cout << "\n" << " El gasto de agua en litros es de : " << EmpireState.gastoAgua() << "\n";
    cout << "\n" << " El gasto de energia en kWh es de : " << EmpireState.gastoEnergia() << "\n";
    cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << EmpireState.toneladas() << "\n";
    
    cout << "Por último tenemos ejemplos de frutos que consumimos diariamente y sus puntajes de sustentabilidad";
    
    //Casos de prueba para clase construcciones
    Construcciones Burj(600, 75000, 6500,10);
    //Burj.mostrarVariables2();
    cout << "\n"<< "\n" << "Edificio: Burj Khalifa";
    cout << "\n" << " El gasto de agua en litros es de : " << Burj.gastoAgua() << "\n";
    cout << "\n" << " El gasto de energia en kWh es de : " << Burj.gastoEnergia() << "\n";
    cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << Burj.toneladas() << "\n";
    
    //Herencias de construcción, caso de prueba para clase casa
    Casa CasaEstilo1(10,500,4,10,true);
    cout << "\n" << "Este es el gasto del agua de la casa "<< CasaEstilo1.gastoAguaCasa();
    
    //Herencia de casa, caso de prueba para clase fraccionamiento
    Fraccionamiento Zibata(CasaEstilo1, true);
    cout <<"\n" <<"Este es el gasto del agua del fraccionamiento"<< Zibata.gastoAguaFracc(CasaEstilo1);
    
    //Herencias de construcción, caso de prueba para clase edificio
    Edificios Antea (50, 8000, 6500, 10, 4, 12);
    cout <<"\n" <<"Este es el gasto del agua de Antea "<< Antea.gastoAguaEdi() << "\n en " << Antea.getDias()<< " dias" ;
    
    Costos Prueba1; //Este es una prueba para un calculo de costos usando los objetos de arriba ya creados. 
    cout <<"\n" <<"Este es el costo del agua de Antea "<< Prueba1.costoAguaEdifi(Antea);
    cout<<"\n" << "Este es el costo de energía de Antea " << Prueba1.costoEnergiaEdifi(Antea);
    cout <<"\n" << "Este es el costo  del agua de Zibatá " << Prueba1.costoAguaFracc(Zibata,CasaEstilo1);
    //cout <<"\n" << "Este es el gasto de energía de Zibatá " << Prueba1.costoEnergiaFracc(Zibata);
    cout<<"\n" << "Este es el costo  del agua de una casa en Pirules (litros) "  << Prueba1.costoAguaCasa(CasaEstilo1);
    //Si ya creaste el obejto, sólo debes poner su nombre, no el tipo de dato (clase al que partenece el objeto)
    
}
