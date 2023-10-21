#include <iostream>
#include <locale>
#include "funciones.h"

using namespace std;

void cargarDatos(float mat[][5], float vec[])
{

    int venta, tc, emp;
    float litros, importe;

    cout << "Ingrese número de venta: ";
    cin >> venta;

    while(venta !=0)
    {
        cout << "Ingrese tipo de combustible: ";
        cin >> tc;
        cout << "Ingrese numero de empleado: ";
        cin >> emp;
        cout << "Ingrese litros: ";
        cin >> litros;
        cout << "Ingrese importe: ";
        cin >> importe;

        //PUNTO A
        mat[emp-100][tc-1] += litros;
        //PUNTO B
        vec[tc-1] += importe;

        cout << "Ingrese número de venta: ";
        cin >> venta;
    }

}

void puntoA(float mat[][5], int emp, int tc)
{
    int i, j;

    for(i=0; i<emp; i++)
    {
        cout << "Empleado # " << i + 100 << endl;
        for(j=0; j<tc; j++)
        {
            //if(mat[0][j] > 100) ventas del empleado 100 con todos los tipos de combustible

            //if(mat[i][4] > 100) ventas de todos los empleados con tipo de combustible 5

            if(mat[i][j] > 100)
            {
                cout << "\tTipo de combustible: " << j + 1 << endl;
            }
        }
        cout << endl;
    }
}

void puntoB(float vec[], int tc)
{
    int i;
    for(i=0; i<tc; i++)
    {
        cout << "El total recaudado por el tipo de combustible " << i + 1 << "es de: $" << vec[i] << endl;
    }
}
