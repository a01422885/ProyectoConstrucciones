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

void menu(){
    
    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar trabajadores asalariados. \n";
    cout << "2. Mostrar trabajadores por hora. \n";
    cout << "3. Mostrar practicantes. \n";
    cout << "4. Calcular total de salario de asalariados. \n";
    cout << "5. Calcular total de salario de por hora \n";
    cout << "6. Calcular total de salario de practicantes \n";
    cout << "7. Calcular total que se reporta a hacienda \n";
    cout << "8. Calcula total de egresos de salarios \n";
    cout << "9. Agregar asalariados \n";
    cout << "10. Agregar Por hora \n";
    cout << "11. Agregar practicantes \n";
    cout << "12. Salir \n";
}



int main(){
    
        Construcciones EmpireState(310, 40000, 3500,10);
        Construcciones Burj(600, 75000, 6500,10);
    
    int opcion = 0;
    
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 12 && opcion > -1){
        
        //Impresion de menu
        menu();
        //Leer indice que selecciona la opcion del menu
        cin >> opcion;
        
        //Switch donde dependiendo la eleccion efectua un diferente procedimiento
        switch(opcion){
                
                //Caso 1 que imprime los empleados de tipo asalariado
            case 1:
                
                cout << "\n" << "\n" << "Edificio: Empire State";
                cout << "\n" << " El gasto de agua en litros es de : " << EmpireState.gastoAgua() << "\n";
                cout << "\n" << " El gasto de energia en kWh es de : " << EmpireState.gastoEnergia() << "\n";
                cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << EmpireState.toneladas() << "\n";
                
                break;
                
                //Caso 2 que imprime los empleados de tipo Por Hora
            case 2:
                empresa.muestraPorHora();
                
                break;
                
                //Caso 3 que imprime los empleados de tipo Practicantes
            case 3:
                empresa.muestraPracticantes();
                
                break;
                
                //Caso 4 que imprime el total del salario de todos los Asalariados
            case 4:
                
                empresa.pagoAsalariado();
                break;
                
                //Caso 5 que imprime el total del salario de todos los PorHora
            case 5:
                empresa.pagoPorHora();
                break;
                
                //Caso 6 que imprime el total del salario de todos los Practicantes
            case 6:
                empresa.pagoPracticantes();
                break;
                
                //Caso 7 Calcula los salarios que se reportan a hacienda
            case 7:
                
                empresa.pagoHacienda();
                
                break;
                
                //Caso 8 Calcula los salarios totales
            case 8:
                
                empresa.pagoTotal();
                
                break;
                
            case 9:
                cout<< "Dime el nombre " ;
                cin >> temp_nombre;
                cout<< "Dime el salario " ;
                cin >> temp_salario;
                empresa.agregaAsalariado(temp_nombre, temp_salario);
                break;
                
            case 10:
                cout<< "Dime el nombre " ;
                cin >> temp_nombre;
                cout<< "Dime el salario " ;
                cin >> temp_salario;
                cout<< "Dime las horas " ;
                cin >> temp_horas;
                empresa.agregaPorhora(temp_nombre, temp_horas, temp_salario);
                break;
                
            case 11:
                cout<< "Dime el nombre " ;
                cin >> temp_nombre;
                cout<< "Dime el salario " ;
                cin >> temp_salario;
                cout<< "Dime las horas " ;
                cin >> temp_horas;
                empresa.agregaPracticante(temp_nombre, temp_horas, temp_salario);
                break;
        }
    }
    
    
    //Casos de prueba para clase construcciones
    
    cout << "\n" << "\n" << "Edificio: Empire State";
    cout << "\n" << " El gasto de agua en litros es de : " << EmpireState.gastoAgua() << "\n";
    cout << "\n" << " El gasto de energia en kWh es de : " << EmpireState.gastoEnergia() << "\n";
    cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << EmpireState.toneladas() << "\n";
    

    
    //Casos de prueba para clase construcciones
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
