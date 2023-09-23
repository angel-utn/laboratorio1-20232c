#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  //declarar una matriz de enteros de 3x3 (3 filas, 3 columnas)

  int mat_1[3][3];

  //declarar una matriz de enteros de 7x3, inicializo en 0

  int mat[7][3] = {};

  string estaciones[2][2] = {"Primavera", "Verano", "Otoño", "Invierno"};
  /*
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      cout << estaciones[i][j] << endl;
    }
  }
  */
  int multiplos[3][4] = {2, 4, 6, 8, 3, 6, 9, 12, 4, 8, 12, 16}; //hardcodeo

  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      cout << multiplos[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}
