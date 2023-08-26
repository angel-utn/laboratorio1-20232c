#include <iostream>
using namespace std;
/**
hacer un programa que pida 3 numeros enteros 
y muestre el promedio
*/

int main() {
   /// float n1, n2, n3;
   int numero, suma=0;
   
   float promedio;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   suma += numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   suma += numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   suma += numero;
   
   /// promedio = (n1 + n2 + n3) / 3.0f;
   promedio = (float)suma / 3;
   
   cout << "Prmedio: "<< promedio << endl;
   
   return 0;
}

