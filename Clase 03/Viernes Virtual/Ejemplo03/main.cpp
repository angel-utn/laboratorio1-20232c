/*
    Ingresar la nota de un alumno. Dependiendo del valor numérico indicar:
    "Excelente (1)" si el valor es 10
    "Aprobado (2)" si el valor está entre 6 y 9
    "Recupera (3)" si el valor está entre 2 y 5
    "Recursa (4)" si el valor es 1
    "Ausente (0)" si el valor es 0
*/
#include <iostream>
using namespace std;

int main(){
    int nota, estado = 0;

    cout << "Nota: ";
    cin >> nota;

    if (nota == 10){
        estado = 1;
    }
    else{
        if(nota >= 6 && nota <= 9){
            estado = 2;
        }
        else{
            if (nota >= 2 && nota <= 5){
                estado = 3;
            }
            else{
                if (nota == 1){
                    estado = 4;
                }
            }
        }
    }

    switch(estado){
        case 1:
            cout << "Excelente";
        break;
        case 2:
            cout << "Aprobado";
        break;
        case 3:
            cout << "Recupera";
        break;
        case 4:
            cout << "Recursa";
        break;
        case 0:
            cout << "Ausente";
        break;

    }
    

    return 0;
}