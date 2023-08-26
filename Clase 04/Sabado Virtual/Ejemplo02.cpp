/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y
luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:

-	“Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
-	“Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
-	“Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
-	“Recursa la materia”, si no aprobó ningún examen parcial.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int nota1, nota2, nota3, nota4;
    string mensaje;

    cout << "Ingrese primer nota: ";
    cin >> nota1;
    cout << "Ingrese segunda nota: ";
    cin >> nota2;
    cout << "Ingrese tercera nota: ";
    cin >> nota3;
    cout << "Ingrese cuarta nota: ";
    cin >> nota4;

    if((nota1 >= 7) && (nota2 >= 7) && (nota3 >= 7) && (nota4 >= 7))
    {
        mensaje = "Promociona";
    }
    else
    {
        if((nota1 < 4) && (nota2 < 4) && (nota3 < 4) && (nota4 < 4))
        {
            mensaje = "Recursa la materia";
        }
        else
        {
            if((nota2 >= 4 && nota3 >= 4 && nota4 >=4) ||
                    (nota1 >= 4 && nota3 >= 4 && nota4 >=4) ||
                    (nota1 >= 4 && nota2 >= 4 && nota4 >=4) ||
                    (nota1 >= 4 && nota2 >= 4 && nota3 >= 4))
            {
                mensaje = "Rinde examen final";
            }
            else{
                mensaje = "Recupera parciales";
            }
        }
    }

    cout << "Situación del alumno: " << mensaje << endl;

    return 0;
}
