#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  const int TAM = 30; //78

  int notas[TAM] = {};

  int i, nota, acumNotas = 0, cont = 0;
  float promedio;

  //CARGA DE NOTAS
  for(i=0; i<TAM; i++){
    cout << "Ingrese nota #" << i + 1 << ": ";
    /*
    cin >> nota;
    notas[i] = nota;
    */
    cin >> notas[i];
    acumNotas += notas[i];
  }

  cout << "Ingrese el número de nota que desea conocer: (1-30) ";
  cin >> nota;

  cout << notas[nota - 1] << endl;

  cout << endl;

  promedio = (float) acumNotas / TAM;

  //cout << "El promedio es: " << promedio << endl;

  for(i=0; i<TAM; i++){
    if(notas[i] > promedio){
      cont++;
    }
  }

  cout << "La cantidad de estudiantes que obtuvieron calificación mayor al promedio es de: " << cont << endl;

  return 0;
}
