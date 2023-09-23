/*
    Cargar las notas de 10 alumnos en 5 materias de la TUP. El programa debe listar:
    
    A) Por cada materia: La cantidad de alumnos aprobados.
    B) Los números de alumnos que hayan aprobado todas las materias.

    NOTA: Se aprueba con calificación 6 en todas las materias.
*/
#include <iostream>
using namespace std;

int main(){
    const int ALUMNOS = 10;
    const int MATERIAS = 5;
    int notas[ALUMNOS][MATERIAS];
    string nombresMaterias[MATERIAS] = {
        "Programación", 
        "Laboratorio de Computación I",
        "Inglés I",
        "Matemática",
        "SPD"
    };

    int i, j;

    for(i=0; i<ALUMNOS; i++){
        for(j=0; j<MATERIAS; j++){
            cout << "Ingresar nota: ";
            cin >> notas[i][j];
        }
    }
    cout << endl << endl;
    for(i=0; i<ALUMNOS; i++){
        for(j=0; j<MATERIAS; j++){
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // A) Por cada materia, la cantidad de alumnos aprobados.
    int c, f;
    int cantAprobados;
    for(c = 0; c < MATERIAS; c ++){
        cantAprobados = 0;
        for (f = 0; f < ALUMNOS; f++){
            if (notas[f][c] >= 6){
                cantAprobados++;
            }
        }

        cout << "Cantidad de aprobados de " << nombresMaterias[c] << ": " << cantAprobados << endl;
    }
    cout << endl;
    // B) Listar los códigos de alumnos que hayan aprobado todas las materias
    cout << "Alumnos que aprobaron todas las materias: " << endl;
    int examenesAprobadosPorAlumno;
    for(f = 0; f < ALUMNOS; f++){
        examenesAprobadosPorAlumno = 0;
        for(c = 0; c < MATERIAS; c++){
            if(notas[f][c] >= 6){
                examenesAprobadosPorAlumno++;
            }
        }
        if (examenesAprobadosPorAlumno == MATERIAS){
            cout << f + 1 << endl;
        }
    }
    cout << endl;

    return 0;
}