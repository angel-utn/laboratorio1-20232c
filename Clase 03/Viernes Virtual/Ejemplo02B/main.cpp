/*
    Hacer un programa que simule tres operaciones de un cajero automático.
    Debe solicitar el importe (negativo para extraccion, positivo para depósito)
    El programa debe informar:
    A- Si hubo al menos un deposito mayor a $50000
    B- La cantidad de depósitos realizados
    C- El total de dinero operado

    Conceptos:
    -----------
    Bandera   : Me permite determinar si ocurrió o no una situación en mi programa
    Acumulador: Numérico. Sobre el valor actual acumula/decrementa un valor N.
    Contador  : Numérico. Sobre el valor actual acumula/decrementa 1.
*/
#include <iostream>
using namespace std;

int main(){
    float importeTransaccion;
    
    bool huboDepositoMayorA50000 = false;
    int cantidadDepositos = 0;
    float totalDineroOperado = 0;
   
    cout << "Importe transaccion #1: $";
    cin >> importeTransaccion;

    //A
    if (importeTransaccion > 50000){
        huboDepositoMayorA50000 = true;
    }
    //B
    if (importeTransaccion > 0){
        cantidadDepositos++;
    }
    //C
    if (importeTransaccion < 0){
        importeTransaccion = importeTransaccion * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion;

    cout << "Importe transaccion #2: $";
    cin >> importeTransaccion;

    //A
    if (importeTransaccion > 50000){
        huboDepositoMayorA50000 = true;
    }
    //B
    if (importeTransaccion > 0){
        cantidadDepositos++;
    }
    //C
    if (importeTransaccion < 0){
        importeTransaccion = importeTransaccion * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion;
    
    cout << "Importe transaccion #3: $";
    cin >> importeTransaccion;

    //A
    if (importeTransaccion > 50000){
        huboDepositoMayorA50000 = true;
    }
    //B
    if (importeTransaccion > 0){
        cantidadDepositos++;
    }
    //C
    if (importeTransaccion < 0){
        importeTransaccion = importeTransaccion * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion;

    cout << "Importe transaccion #4: $";
    cin >> importeTransaccion;

    //A
    if (importeTransaccion > 50000){
        huboDepositoMayorA50000 = true;
    }
    //B
    if (importeTransaccion > 0){
        cantidadDepositos++;
    }
    //C
    if (importeTransaccion < 0){
        importeTransaccion = importeTransaccion * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion;



    if (huboDepositoMayorA50000){
        cout << "A) Hubo al menos un deposito mayor a $50000" << endl;
    }
    else{
        cout << "A) No hubo un deposito mayor a $50000" << endl;
    }
    cout << "B) Cantidad de depositos  : " << cantidadDepositos << endl;
    cout << "C) Total de dinero operado: " << totalDineroOperado << endl;

    return 0;
}