/*
Dado un número entero ingresado por teclado, calcular e informar por pantalla cada uno de los dígitos del número.
Variante desafío: Mostrar por pantalla los dígitos pero de izquierda a derecha.
Ejemplo: 4 5 6 2
*/
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  int num, d, digitos = 0, numOriginal, i;

  cout << "Ingrese un número: ";
  cin >> num;

  numOriginal = num;

  //AVERIGUAMOS LA CANTIDAD DE DIGITOS
  while(num > 0){
    digitos++;
    num = num / 10;
    //num /= 10;
  }

  //cout << "Cantidad de dígitos: " << digitos << endl;
  num = numOriginal;

  for(i=digitos-1; i>=0; i--){
      d = num / pow(10, i);
      cout << d << endl;
      num = num % (int) pow(10, i);
  }

  return 0;
}
