#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    const int EMPLEADOS = 11;
    const int TIPOCOMB = 5;

    float mat[EMPLEADOS][TIPOCOMB] = {};
    float vec[TIPOCOMB] = {};

    cargarDatos(mat, vec);

    puntoA(mat, EMPLEADOS, TIPOCOMB);
    puntoB(vec, TIPOCOMB);

    return 0;
}
