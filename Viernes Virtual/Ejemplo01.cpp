/*
Hacer un programa que permita ingresar dos números enteros
por teclado. Luego calcular e informar la suma de ellos.
*/

#include <iostream>
using namespace std;

int main(){
  int num1, num2, resultado;
  cout << "Ingresar el primer nro: ";
  cin >> num1;
  cout << "Ingresar el segundo nro: ";
  cin >> num2;
  resultado = num1 + num2;
  cout << endl;
  cout << "La suma es: ";
  cout << resultado;

  return 0;
}
