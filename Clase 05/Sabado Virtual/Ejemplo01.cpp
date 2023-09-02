#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

/*
Hacer un programa para cargar las notas de 10 alumnos.
Calcular e informar:
A- La nota máxima
B- La cantidad de estudiantes aprobados
C- El promedio general de calificaciones

NOTA: Un examen aprobado tiene una nota >= 6
*/
using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

	const int NOTAS = 10;

	int i, nota;
	//A
	int maxima;
	//B
	int cont = 0;
	//C
	int acum = 0;
	float promedio;

	for(i=1; i<=NOTAS; i++){
      cout << "Ingrese nota #" << i << ": ";
      cin >> nota;

      //A
      if(i == 1){
        maxima = nota;
      }
      else{
        if(nota > maxima){
          maxima = nota;
        }
      }

      //B
      if(nota >= 6){
        cont++;
      }

      //C
      acum += nota;
	}

	//A
	cout << "La nota máxima es: " << maxima << endl;
	//B
	cout << "La cantidad de estudiantes aprobados es de: " << cont << endl;
	//C
	promedio = (float) acum / NOTAS;
	cout << "El promedio general de calificaciones es: " << fixed << setprecision(2) << promedio << endl;

	return 0;
}
