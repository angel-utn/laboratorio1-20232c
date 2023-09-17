#include <iostream>
using namespace std;

int main(){
    int numero, auxiliar, sumaPotencias=0, digito, cifras=0, i, potencia;

    cout << "Ingresar número: ";
    cin >> numero;
    auxiliar = numero;

    while (auxiliar > 0){
        cifras++;
        auxiliar = auxiliar / 10;
    }

    auxiliar = numero;
    while (auxiliar > 0){
        digito = auxiliar % 10;

        potencia = 1;
        for(i=1; i<=cifras; i++){
            potencia = potencia * digito;
        }

        sumaPotencias += potencia;
        auxiliar = auxiliar / 10;
    }

    if (numero == sumaPotencias){
        cout << numero << " es narcicista." << endl;
    }
    else{
        cout << numero << " NO es narcicista" << endl;
    }

    return 0;
}