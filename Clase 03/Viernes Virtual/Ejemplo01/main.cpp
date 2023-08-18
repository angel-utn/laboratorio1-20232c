#include <iostream>
using namespace std;

int main(){
    string nombreArticulo;
    float importe;
    int cantidadRifas = 0;

    cout << "Nombre del articulo: ";
    cin >> nombreArticulo;

    cout << "Importe total de la venta: $";
    cin >> importe;

    /*
        OR  (A || B)
        ----------------
        A       B       RES
        true    true    true
        false   true    true
        true    false   true
        false   false   false

        AND  (A && B)
        ----------------
        A       B       RES
        true    true    true
        false   true    false
        true    false   false
        false   false   false
    */

    if (importe >= 100 && importe <= 1000){
        cantidadRifas = 1;
    }
    else{
        if (importe > 1000 && importe <= 2500){
            cantidadRifas = 2;
        }
        else{
            if (importe > 2500 && importe <= 7500){
                cantidadRifas = 5;
            }
            else{
                if (importe > 7500){
                    cantidadRifas = 10;
                }
            }
        }
    }

    /*
    if (importe >= 100 && importe <= 1000){
        cantidadRifas = 1;
    }
    else if (importe > 1000 && importe <= 2500){
        cantidadRifas = 2;    
    }
    else if (importe > 2500 && importe <= 7500){
        cantidadRifas = 5;
    }
    else if (importe > 7500){
        cantidadRifas = 10;
    }
    */

    cout << endl << "-------------------------------------------" << endl;
    cout << nombreArticulo << " - $ " << importe << endl;
    cout << "Cantidad de rifas: " << cantidadRifas << endl;

    return 0;
}