#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  int vec[10] = {};

  for(int i = 0; i<10; i++){
    cout << vec[i] << endl;
  }

  cout << "-----" << endl;

  int vec_2[5] = {1, 2, 3, 4, 5};

  for(int i = 0; i<5; i++){
    cout << vec_2[i] << endl;
  }

  cout << "-----" << endl;

  int vec_3[10];

  for(int i = 0; i < 10; i++){
    vec_3[i] = 100;
  }

  for(int i = 0; i < 10; i++){
    cout << vec_3[i] << endl;
  }

  string vec_estaciones[4] = {"Verano", "Otoño", "Invierno", "Primavera"};
  int pos;

  cout << "Ingrese posición: (0-Verano, 1-Otoño, 2-Invierno, 3-Primavera) ";
  cin >> pos;

  cout << vec_estaciones[pos] << endl;

  return 0;
}
