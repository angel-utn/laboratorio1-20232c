#include <iostream>
using namespace std;

/**
    Hacer un programa que pida dos numeros enteros
    y muestre la suma de ellos.
*/

int main(){
    /// Declaro las variables
    int n1, n2;

    /// Solicito los datos de entrada
    cout << "Ingrese un numero: ";
    cin >> n1;

    cout<<"Ingrese otro numero: ";
    cin>>n2;


    /// Mustro los datos de salida
    cout << endl;
    cout << n1 << " + " << n2 << " = " << (n1 + n2) << endl << endl;

    /// finaliza mi programa
    return 0;
}
