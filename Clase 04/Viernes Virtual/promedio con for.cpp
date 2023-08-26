#include <iostream>
using namespace std;
/**
hacer un programa que pida 5 numeros enteros 
y muestre el promedio
*/

/// contador cuenta una cantidad fija simepre
   /// cont += 5
   /// cont += 1
   /// cont ++
/// acumulador suma una cantida variable
   /// acu += n

int main() {
   
   /// float n1, n2, n3;
   int numero, suma=0, cant=0;
   
   float promedio;
   
   for(int i=1; i<=10; i++){
      
      cout << "Ingrese #"<< i << ": ";
      cin >> numero;
      suma += numero;
      cant++;
   }
   
   promedio = (float)suma / cant;
   
   cout << "Prmedio: "<< promedio << endl;
   
   return 0;
}

