#include <iostream>
using namespace std;

/***
Hacer un programa que dado 3 numeros enteros muestre un mensaje indicando 
"TODOS POSITIVOS" si todos los numeros son positivos
"ALGUNOS POSITIVOS" si alguno de los numeros es positivo
"NINGUNO POSITIVO" si ninguno de los numeros es positivo

*/

int main() {
   int num1, num2, num3;
   
   cout << "Ingrese Numero:";
   cin >> num1;
   
   cout << "Ingrese Numero:";
   cin >> num2;
   
   cout << "Ingrese Numero:";
   cin >> num3;
   
   if(num1 > 0 && num2 > 0 && num3 > 0){
      cout << "Todos positivos!" << endl;
   }
   else{
      if(num1 > 0 || num2 > 0 || num3 > 0){
         cout << "Algun positivos!" << endl;
      }
      else{
         cout << "No hay positivos :("<<endl;
      }   
   }
   
   
   return 0;
}

