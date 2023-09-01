/*
Hacer un programa para cargar las notas de 10 alumnos.
Calcular e informar:
- La nota máxima
- La cantidad de estudiantes aprobados 
- El promedio general de calificaciones

NOTA: Un examen aprobado tiene una nota >= 6
*/
#include <iostream>
using namespace std;

int main(){
    const int EXAMENES = 15;
    const int NOTA_PARA_APROBAR = 6;
    int nota, i;

    // A
    int notaMaxima = 0;
    // B
    int cantidadEstudiantesAprobados = 0;
    // C
    int sumaNotas = 0;
    float promedio;

    for(i=1; i<=EXAMENES; i++){
        cout << "Nota: ";
        cin >> nota;
        // A
        if (nota > notaMaxima){
            notaMaxima = nota;
        }
        // B
        if (nota >= NOTA_PARA_APROBAR){
            cantidadEstudiantesAprobados++;
        }
        // C
        sumaNotas += nota;
    }

    cout << "A) Nota máxima: " << notaMaxima << endl;
    cout << "B) Cantidad de aprobado/as: " << cantidadEstudiantesAprobados << endl;
    
    promedio = (float) sumaNotas / EXAMENES;
    cout << "C) Promedio general: " << promedio << endl;

    return 0;
}