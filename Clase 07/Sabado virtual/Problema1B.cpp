/*
NARCISISTAS DE 3 CIFRAS: 153, 370, 371, 407
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  const int CIFRAS = 3;
  int num, i, d, sumaPotencias = 0, numOriginal;

  cout << "Ingrese un número: ";
  cin >> num;

  numOriginal = num;

  for(i=CIFRAS-1; i>=0; i--){
      d = num / pow(10, i);
      //cout << d << endl;
      sumaPotencias += pow(d, CIFRAS);
      num = num % (int) pow(10, i);
  }

  //cout << "Suma de potencias: " << sumaPotencias << endl;

  if(numOriginal == sumaPotencias){
    cout << "El número " << numOriginal << " es narcisista" << endl;
  }
  else{
    cout << "El número " << numOriginal << " NO es narcisista" << endl;
  }

  return 0;
}
