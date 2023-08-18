#include <iostream>
using namespace std;

int main(){

    float importeTransaccion; // Si es positivo Deposito, si es negativo Extracción
    string nombreTransaccion;

    cout << "Importe de transaccion: $";
    cin >> importeTransaccion;

    nombreTransaccion = ((importeTransaccion > 0) ? "Deposito" : "Extraccion");

    /*
    if (importeTransaccion > 0){
        nombreTransaccion = "Deposito";
    }
    else{
        nombreTransaccion = "Extraccion";
    }
    */

   cout << nombreTransaccion << endl;

    return 0;
}