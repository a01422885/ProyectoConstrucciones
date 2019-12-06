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
    cout << "\nMenu de opciones:\n";
    cout << "1. Mostrar gasto de agua y energía para el Empire State \n";
    cout << "2. Mostrar gasto de agua y energía para el edificio más alto del mundo, Burj Khalifa. \n\n";
    cout << "3. Calcular el gasto del agua de la Casa Modelo 1 \n";
    cout << "4. Calcular el gasto de energía de la Casa Modelo 1 \n";
    cout << "5. Calcular el costo del agua de la Casa Modelo 1 \n";
    cout << "6. Calcular el costo de energía de la Casa Modelo 1 \n";
    cout << "7. Calcular el gasto del agua de Antea\n";
    cout << "8. Calcular el costo del agua de Antea\n";
    cout << "9. Calcular el gasto de energía de Antea \n";
    cout << "10. Calcular el costo de energía de Antea \n";
    cout << "11. Calcular el gasto del agua del Condominio Real del Parque\n";
    cout << "12. Calcular el gasto de energía del Condominio Real del Parque\n";
    cout << "13. Calcular el costo de energía del Condominio Real del Parque\n";
    cout << "14. Calcular el costo de agua del Condominio Real del Parque\n";
    cout << "15. Salir\n";
}



int main(){
    
    Construcciones EmpireState(310, 40000, 3500,10);
    Construcciones Burj(600, 75000, 6500,10);
    Casa CasaEstilo1(10,500,4,10,true);
    Casa CasaEstilo2(10,500,4,10,false);
    Casa CasaEstilo4(10,500,5,10,true);
    Casa CasaEstilo3(10,500,6,10,false);
    Fraccionamiento Condominio(CasaEstilo1, true);
    Edificios Antea (50, 8000, 6500, 10, 4, 12);
    Costos Prueba1;

    Condominio.agrega_casa(CasaEstilo4);
    Condominio.agrega_casa(CasaEstilo1);
    Condominio.agrega_casa(CasaEstilo2);
    Condominio.agrega_casa(CasaEstilo3);
    
    cout << "Este es un programa interactivo diseñado para ingenieros civiles y arquitectos, el cual te permite calcular principalmente los costos de construcciones conocidas en el mundo, en Queretaro o modelos muy básicos de casas e incluso condiminios para arquitectos principiantes. Los costos de los gastos que se pueden calcular con el programa son principalmente de energía y de agua, para las diferentes construcciones en función de un tiempo determinado medido en días (en este caso se tomo como base 10 días para yodas las contrucciones) además de otras variables importantes de diferentes construcciones como la altura, el volumen, la ocupación promedio de personas,la cantidad de pisos, baños, entre otros.  ";
    int opcion = 0;
    
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 15 && opcion > -1){
        
        //Impresion de menu
        menu();
        //Leer indice que selecciona la opcion del menu
        cout << "Ingresa opción deseada: " ;
        cin >>opcion;
        
        //Switch donde dependiendo la eleccion efectua un diferente procedimiento
        switch(opcion){
                
                
            case 1:
                
                cout << "\n" << "\n Edificio: Empire State" << "\n En " <<EmpireState.getDias() <<" días";
                cout << "\n" << " El gasto de agua en litros es de : " << EmpireState.gastoAgua();
                cout << "\n" << " El gasto de energia en kWh es de : " << EmpireState.gastoEnergia() << "\n";
                cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << EmpireState.toneladas() << "\n";
                cout << "Cuando se cuenta con: \n" << EmpireState.getH()<< " metros de altura \n Una ocupación de personas de: " << EmpireState.getOcupacion() <<"\n Con un area en m^2 de: "<< EmpireState.getArea()<<"\n";  
              
                
                break;
                
                
            case 2:
                cout << "\n"<< "\n" << "Edificio: Burj Khalifa" << "\n En " <<Burj.getDias() <<" días";
                cout << "\n" << " El gasto de agua en litros es de : " << Burj.gastoAgua() << "\n";
                cout << "\n" << " El gasto de energia en kWh es de : " << Burj.gastoEnergia() << "\n";
                cout << "\n" << " Las toneladas de concreto ocupadas fueron: " << Burj.toneladas() << "\n";
              
                
                break;
                
                
            case 3:
          
                cout << "\n En " << CasaEstilo1.getDias() <<" días" << "\n" << "Este es el gasto del agua de la casa en litros: "<< CasaEstilo1.gastoAguaCasa()<< "\n" ;
                cout << "Cuando se cuenta con: \n" << CasaEstilo1.getH()<< " metros de altura \n Una ocupación de personas de: " << CasaEstilo1.getOcupacion() <<"\n Con un area en m^2 de: "<<CasaEstilo1.getArea()<< "\n Con jardin."<<"\n";  
                
                break;
                

            case 4:
                cout << "\n En " << CasaEstilo1.getDias() <<" días" << "\n" << "Este es el gasto de energía promedio de Antea en KWh "<< CasaEstilo1.gastoEnergia();
                cout << "\n" << "Cuando se cuenta con: \n" << CasaEstilo1.getH()<< " metros de altura \n Una ocupación de personas de: " << CasaEstilo1.getOcupacion() <<"\n Con un area en m^2 de: "<<CasaEstilo1.getArea()<< "\n Con jardin."<<"\n"; 
                break;

            case 5:
                cout <<"\n" <<"Este es el costo del agua de la Casa Estilo 1 en $MXN"<< Prueba1.costoAguaCasa(CasaEstilo1) << "\n en " << Antea.getDias()<< " dias" ;
                cout << "\n" << "Cuando se cuenta con: \n" << CasaEstilo1.getH()<< " metros de altura \n Una ocupación de personas de: " << CasaEstilo1.getOcupacion() <<"\n Con un area en m^2 de: "<<CasaEstilo1.getArea()<< "\n Con jardin."<<"\n"; 
                break;
            
            case 6:
              cout<<"\n" << "Este es el costo de energía de Antea en $MXN " << Prueba1.costoEnergiaCasa(CasaEstilo1) << " con un costo por KW/h de  "<< Prueba1.getCostoKWh() <<" ($MXN)\n";
              cout << "\n" << "Cuando se cuenta con: \n" << CasaEstilo1.getH()<< " metros de altura \n Una ocupación de personas de: " << CasaEstilo1.getOcupacion() <<"\n Con un area en m^2 de: "<<CasaEstilo1.getArea()<< "\n Con jardin."<<"\n"; 

            break;

           
  //__________________________________________________________antea
            case 7:
                
                cout <<"\n" <<"Este es el gasto del agua de Antea en litros: "<< Antea.gastoAguaEdi() << "\n en " << Antea.getDias()<< " dias"; cout<< "\n"  << "Cuando se cuenta con: \n" << Antea.getH()<< " metros de altura \n Una ocupación promedio de personas de: " << Antea.getOcupacion() <<"\n Con un area en m^2 de: "<<Antea.getArea() <<"\n Con un cantidad de baños de: "<<Antea.getBanos()<<"\n Con un cantidad de pisos de: "<<Antea.getNPisos()<<"\n";
                break;
                
            case 8:
                cout <<"\n" <<"Este es el costo del agua de Antea en $MXN"<< Prueba1.costoAguaEdifi(Antea) << "\n en " << Antea.getDias()<< " dias" ;
                cout<< "\n"  << "Cuando se cuenta con: \n" << Antea.getH()<< " metros de altura \n Una ocupación promedio de personas de: " << Antea.getOcupacion() <<"\n Con un area en m^2 de: "<<Antea.getArea() <<"\n Con un cantidad de baños de: "<<Antea.getBanos()<<"\n Con un cantidad de pisos de: "<<Antea.getNPisos()<<"\n";
            break;

            case 9:
              cout<<"\n" << "Este es el gasto de energía promedio de Antea en KWh: " << Condominio.gastoEnergiaFracc(CasaEstilo1)<< "\n en " << Antea.getDias()<< " dias";
              cout << "\n" << "Cuando se cuenta con: \n" << Antea.getH()<< " metros de altura \n Una ocupación promedio de personas de: " << Antea.getOcupacion() <<"\n Con un area en m^2 de: "<<Antea.getArea() <<"\n Con un cantidad de baños de: "<<Antea.getBanos()<<"\n Con un cantidad de pisos de: "<<Antea.getNPisos()<<"\n";
            break;


                
                
            case 10:
                
                cout<<"\n" << "Este es el costo de energía de Antea en $MXN: " << Prueba1.costoEnergiaEdifi(Antea) << " con un costo por KW/h de  "<< Prueba1.getCostoKWh() <<" ($MXN)\n"<< "\n en " << Antea.getDias()<< " dias" ;
                cout<< "\n"  << "Cuando se cuenta con: \n" << Antea.getH()<< " metros de altura \n Una ocupación promedio de personas de: " << Antea.getOcupacion() <<"\n Con un area en m^2 de: "<<Antea.getArea() <<"\n Con un cantidad de baños de: "<<Antea.getBanos()<<"\n Con un cantidad de pisos de: "<<Antea.getNPisos()<<"\n";
                
            break;
                
        //__________________________________________________________condominio
            case 11:
                 cout << "\n En " << CasaEstilo1.getDias() <<" días" <<"\n" <<"Este es el gasto del agua del condominio Real del Parque que cuenta con un campo de Golf en litros: "<< Condominio.gastoAguaFracc(CasaEstilo1) <<"\n Que también cuenta con el siguiente numero de casas: "<< Condominio.getTLista() <<"\n";
                
            break;
                
            case 12:
               cout<<"\n" << "Este es el gasto de energía promedio del condominio Real del Parque  en KWh: " <<"\n" << Condominio.gastoEnergiaFracc(CasaEstilo1)<< "\n en " << CasaEstilo1.getDias()<< " dias"<<"\n Que también cuenta con el siguiente numero de casas: "<< Condominio.getTLista() <<"\n";
            break;

            case 13:
              cout<<"\n" << "Este es el costo de energía en $MXN del condominio Real del Parque que cuenta con un campo de Golf:  "<<"\n" << Prueba1.costoEnergiaFracc(Condominio, CasaEstilo1) << " con un costo por KW/h de  "<< Prueba1.getCostoKWh() <<" ($MXN)\n"<< "\n en " << CasaEstilo1.getDias()<< " dias"<<"\n Que también cuenta con el siguiente numero de casas: "<< Condominio.getTLista()<<"\n" ;
              
            break;
                
            case 14:
              cout <<"\n" << "Este es el costo en $MXN del agua de condominio Real del Parque que cuenta con un campo de Golf" << Prueba1.costoAguaFracc(Condominio,CasaEstilo1)<<" ($MXN)\n" << " con un costo por litro de  "<< Prueba1.getCostoLitro() <<" ($MXN)\n"<< "\n en " << "\n en " << CasaEstilo1.getDias()<< " dias"<<"\n Que también cuenta con el siguiente numero de casas: "<< Condominio.getTLista() <<"\n";
           
            break;
        }
    }
}
