#include <iostream>
using namespace std;

int main(){
    const int NOTAS = 5;
    int notas[NOTAS];
    int i, numeroNota, sumaNotas = 0, cantidadMayoresAlPromedio = 0;
    float promedio;

    for (i=0; i < NOTAS; i++){
        cout << "Ingresar nota: ";
        cin >> notas[i];
    }
    cout << endl;
    cout << "Las notas ingresadas fueron: ";
    for (i=0; i < NOTAS; i++){
        cout << notas[i] << " ";
    }
    cout << endl;
    cout << "Ingresar la nota a visualizar: ";
    cin >> numeroNota;

    cout << "La nota # " << numeroNota << " fue: ";
    cout << notas[numeroNota - 1] << endl;

    for (i=0; i < NOTAS; i++){
        sumaNotas = sumaNotas + notas[i];
    }
    promedio = (float) sumaNotas / NOTAS;
    cout << endl << "Promedio de notas: " << promedio << endl;
    for(i=0; i < NOTAS; i++){
        if (notas[i] > promedio){
            cantidadMayoresAlPromedio++;
        }
    }
    cout << endl << "Cantidad de notas mayores al promedio: " << cantidadMayoresAlPromedio;
    cout << endl;
    return 0;
}