#include <iostream>
using namespace std;

int main(){
    int IDEspecialidad, IDConsulta, duracion, dia,hora;

    // A
    int sumaDuracion;
    int cantConsultas;
    float promedioDuracion;

    // Lote completo de las especialidades médicas
    cout << "ID Especialidad: ";
    cin >> IDEspecialidad;

    while(IDEspecialidad != 0){
        cout << "ID Consulta: ";
        cin >> IDConsulta;

        sumaDuracion = 0;
        cantConsultas = 0;

        // Consultas médicas de cada especialidad
        while(IDConsulta >= 0){
            cout << "Duracion: ";
            cin >> duracion;
            cout << "Dia: ";
            cin >> dia;
            cout << "Hora: ";
            cin >> hora;
            // A
            cantConsultas++;
            sumaDuracion += duracion;

            cout << "ID Consulta: ";
            cin >> IDConsulta;
        }
        // Mostrar A y B
        if (cantConsultas != 0){
            promedioDuracion = (float) sumaDuracion / cantConsultas;
            cout << "A) Promedio: " << promedioDuracion << endl << endl; 
        }


        cout << "ID Especialidad: ";
        cin >> IDEspecialidad;
    }
    // Mostrar C y D

    return 0;
}