#include <iostream>
using namespace std;

int main(){
    int numero, digito, digitos = 0, digitos_pares = 0;
    bool todosDigitosPares = true;

    cout << "Ingresar número: ";
    cout << endl;
    cin >> numero;
    cout << endl;
    
    while (numero > 0){
        digito = numero % 10;
        digitos++; // Cuantos digitos tiene el numero
        if (digito % 2 == 0){
            digitos_pares ++; // Cuantos digitos pares tiene el nro
        }
        else{
            todosDigitosPares = false;
        }
        numero = numero / 10;
    }

    cout << "Alternativa con contadores: " << endl;
    if (digitos == digitos_pares){
        cout << "Todos los dígitos del número son pares." << endl;
    }
    else{
        cout << "No todos los dígitos del número son pares." << endl;
    }
    cout << "------------------------------------------------" << endl;
    cout << "Alternativa con bandera: " << endl;
    if (todosDigitosPares == true){
        cout << "Todos los dígitos del número son pares." << endl;
    }
    else{
        cout << "No todos los dígitos del número son pares." << endl;
    }



    return 0;
}