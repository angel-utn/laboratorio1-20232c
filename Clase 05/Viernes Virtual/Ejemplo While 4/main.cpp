/**
 * @file main.cpp
 * @author Angel
 * @brief 
 El influencer Santiago Laratea organizó una colecta para recaudar fondos para un 
importante club de Buenos Aires. El objetivo es cubrir los 500 mil pesos y para ello 
cualquier persona puede aportar la cantidad de dinero que desee. Por cada aporte 
de dinero se registra el monto donado. No se sabe la cantidad de aportantes que 
habrá. Pero el club ha dejado claro que en cuanto se cubra la deuda de 500 mil 
pesos no se aceptarán más donaciones.
Se  pide  hacer  un  programa  que  permita  cargar  las  donaciones  siguientes  las 
reglas mencionadas anteriormente y calcular:
- La cantidad de donaciones de la colecta.
- El monto de la colecta más generoso.
- El total recaudado.
- La cantidad de donaciones que superaron el 1% de la deuda.

 * @version 0.1
 * @date 2023-09-01
 * 
 */
#include <iostream>
using namespace std;

int main(){
    const float DEUDA_TOTAL = 500000;
    float totalRecaudado = 0, importe;

    int cantidadDonaciones = 0;
    float donacionMaxima = 0;
    int cantidadDonacionesMayorUnoPorCiento = 0;

    while(totalRecaudado < DEUDA_TOTAL){
        cout << "Monto de la donación: $ ";
        cin >> importe;
        //C
        totalRecaudado += importe;
        //A
        cantidadDonaciones++;
        //B
        if (importe > donacionMaxima){
            donacionMaxima = importe;
        }
        //D
        if (importe > (DEUDA_TOTAL * 0.01)){
            cantidadDonacionesMayorUnoPorCiento++;
        }
    }

    cout << endl << "Fin de la colecta" << endl << endl;
    cout << "A) Cantidad de donaciones: " << cantidadDonaciones << endl;
    cout << "B) Donación máxima       : " << donacionMaxima << endl;
    cout << "C) Total recaudado       : " << totalRecaudado << endl;
    cout << "D) Cantidad de > 1%      : " << cantidadDonacionesMayorUnoPorCiento << endl;

    return 0;
}