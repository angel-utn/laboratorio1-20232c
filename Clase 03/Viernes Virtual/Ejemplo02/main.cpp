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
    float importeTransaccion1, importeTransaccion2, importeTransaccion3;
    
    bool huboDepositoMayorA50000 = false;
    int cantidadDepositos = 0;
    float totalDineroOperado = 0;

    cout << "Importe transaccion #1: $";
    cin >> importeTransaccion1;
    
    cout << "Importe transaccion #2: $";
    cin >> importeTransaccion2;
    
    cout << "Importe transaccion #3: $";
    cin >> importeTransaccion3;

    // A
    if (importeTransaccion1 > 50000 || importeTransaccion2 > 50000 || importeTransaccion3 > 50000){
        huboDepositoMayorA50000 = true;
    }

    // B
    if (importeTransaccion1 > 0){
        cantidadDepositos++; // cantidadDepositos = cantidadDepositos + 1;
    }
    if (importeTransaccion2 > 0){
        cantidadDepositos++; // cantidadDepositos = cantidadDepositos + 1;
    }
    if (importeTransaccion3 > 0){
        cantidadDepositos++; // cantidadDepositos = cantidadDepositos + 1;
    }

    //C
    if (importeTransaccion1 < 0){
        importeTransaccion1 = importeTransaccion1 * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion1;

    if (importeTransaccion2 < 0){
        importeTransaccion2 = importeTransaccion2 * (-1);
    }
    totalDineroOperado = totalDineroOperado + importeTransaccion2;

    if (importeTransaccion3 < 0){
        importeTransaccion3 = importeTransaccion3 * (-1);
    }
    //totalDineroOperado = totalDineroOperado + importeTransaccion3;
    totalDineroOperado += importeTransaccion3;


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