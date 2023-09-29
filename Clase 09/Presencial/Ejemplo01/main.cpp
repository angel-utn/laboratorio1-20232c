/*
    Cargar las notas de 20 alumnos de la materia Laboratorio I
    y calcular e informar:
    - La nota máxima y cuántos alumnos tienen la nota máxima.
    - Pedir el número de alumno e informar la calificación obtenida.
*/
#include <iostream>
using namespace std;

int main(){
    const int TAM = 5;
    int notas[TAM];
    int i;
    int notaAVisualizar, notaMaxima, cantidadConNotaMaxima=0;

    for(i=0; i<TAM; i++){
        cout << "Ingresar nota: ";
        cin >> notas[i];
    }
    cout << endl << "--------------------------" << endl;

    cout << "Ingresar el nro de nota a visualizar: ";
    cin >> notaAVisualizar;

    cout << "La nota es: " << notas[notaAVisualizar - 1] << endl;
    cout << endl << "--------------------------" << endl;

    for(i=0; i<TAM; i++){
        cout << "Nota #" << i+1 << ": " << notas[i] << endl;
    }
    cout << endl << "--------------------------" << endl;
    notaMaxima = notas[0];
    for(i=1; i<TAM; i++){
        if (notas[i] > notaMaxima){
            notaMaxima = notas[i];
        }
    }
    cout << "Nota maxima: " << notaMaxima << endl;
    cout << endl << "--------------------------" << endl;
    for(i=0; i<TAM; i++){
        if (notas[i] == notaMaxima){
            cantidadConNotaMaxima++;
        }
    }
    cout << "Alumnos con la nota maxima: " << cantidadConNotaMaxima << endl;


    return 0;
}