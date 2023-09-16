/* EL ALGORITMO SIRVE ÚNICAMENTE PARA POTENCIAS >=0 */
/* con POW podemos trabajar con exponente negativo; invierte el número */
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  int base, exponente, i, potencia = 1;
  float pot;

  cout << "Ingrese base: ";
  cin >> base;
  cout << "Ingrese exponente: ";
  cin >> exponente;

  for(i=1; i<=exponente; i++){
      potencia = potencia * base;
  }

  /* base = 10 exponente = 3
  i=1 --> potencia = 10
  i=2 --> potencia = 100
  i=3 --> potencia = 1000
  */

  pot = pow(base, exponente);

  cout << "Resultado de elevar " << base << " a la potencia " << exponente << ": " << potencia << endl;
  cout << "Resultado de elevar " << base << " a la potencia " << exponente << ": " << pot << endl;

  return 0;
}
