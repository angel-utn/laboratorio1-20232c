/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que 
les permita cargar todas los entrenamientos de sus 50 clientes, cada registro 
de entrenamiento contiene:
- Numero de Entrenamiento (1 - 9999)
- Cliente (101 - 150)
- Tipo de Entrenamiento ( 1 - 10 )
- Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información 
no se encuentra agrupada ni ordenada. El fin de la carga de entrenamientos 
se indica con un número de entrenamiento igual a cero, informar:
1) Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y 
minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
2) Por cada cliente, los tipos de entrenamiento que realizó.
*/

#include <iostream>
using namespace std;

int main(){
    const int CLIENTES = 50;
    const int ENTRENAMIENTOS = 10;
    int nroEntrenamiento, codCli, tipoEntrenamiento, duracion;
    /// A
    int tiempoPorCliente[CLIENTES] = {};

    // B
    bool entrenamientosXClientes[CLIENTES][ENTRENAMIENTOS] = {};

    // A y B: Para resolver ambos puntos con una misma matriz
    int tiempoPorClienteyEntrenamiento[CLIENTES][ENTRENAMIENTOS] = {};

    cout << "Nro Entrenamiento: ";
    cin >> nroEntrenamiento;

    while(nroEntrenamiento != 0){
        cout << "Cod Cliente: ";
        cin >> codCli;
        cout << "Tipo de Entrenamiento: ";
        cin >> tipoEntrenamiento;
        cout << "Duracion: ";
        cin >> duracion;
        //A
        int indiceCli = codCli - 101;
        tiempoPorCliente[indiceCli] += duracion; 
        //B
        entrenamientosXClientes[indiceCli][tipoEntrenamiento-1] = true;

        // A y B
        tiempoPorClienteyEntrenamiento[indiceCli][tipoEntrenamiento-1] += duracion;
        

        cout << "Nro Entrenamiento: ";
        cin >> nroEntrenamiento;    
    }

    cout << endl << "PUNTO A" << endl;
    cout << "---------------------------------------" << endl;
    for(int i = 0; i < CLIENTES; i++){
        cout << "CLIENTE: " << i+101 << endl;
        cout << "TIEMPO : " << tiempoPorCliente[i] << " minutos." << endl << endl;
    }
    
    /*
    //Alternativa que utiliza una matriz para ambos puntos

    for(int i = 0; i < CLIENTES; i++){
        int tiempoPorCliente = 0;
        cout << "CLIENTE: " << i+101 << endl;

        for(int j = 0; j < ENTRENAMIENTOS; j++){
            tiempoPorCliente += tiempoPorClienteyEntrenamiento[i][j];
        }

        cout << "TIEMPO : " << tiempoPorCliente << " minutos." << endl << endl;
    }
    */
    cout << endl;
    cout << endl << "PUNTO B" << endl;
    cout << "---------------------------------------" << endl;
    for(int i = 0 ; i < CLIENTES; i++){
        cout << "Cliente " << i+101 << endl;
        cout << "Entrenamientos: ";
        bool entreno = false;

        for(int j = 0; j < ENTRENAMIENTOS; j++){
            if (entrenamientosXClientes[i][j] == true){
                entreno = true;
                cout << j+1 << " ";
            }
        }
        if (entreno == false){
            cout << "Ninguno" << endl;
        }
        cout << endl << endl;
    }

    /*
    // Alternativa que resuelve ambos puntos con una matriz
    for(int i = 0 ; i < CLIENTES; i++){
        cout << "Cliente " << i+101 << endl;
        cout << "Entrenamientos: ";
        bool entreno = false;

        for(int j = 0; j < ENTRENAMIENTOS; j++){
            if (tiempoPorClienteyEntrenamiento[i][j] > 0){
                entreno = true;
                cout << j+1 << " ";
            }
        }
        if (entreno == false){
            cout << "Ninguno" << endl;
        }
        cout << endl << endl;
    }
    */
    return 0;
}