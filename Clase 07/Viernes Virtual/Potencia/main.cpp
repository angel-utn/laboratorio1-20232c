#include <iostream>
using namespace std;

int main(){
    int base, exponente, potencia = 1, i;

    cout << "Base: ";
    cin >> base;

    cout << "Exponente: ";
    cin >> exponente;
    
    for(i=1; i<=exponente; i++){
        potencia = potencia * base;
    }

    cout << "Resultado de la potenciación: " << potencia << endl;

}