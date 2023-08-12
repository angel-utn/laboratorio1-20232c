#include <iostream>
using namespace std;

/***
   Hacer un programa que dado 3 numeros enteros muestre un mensaje indicando 
   si alguno de ellos son positivos en caso de que no haya, mostrar un mensaje aclarandolo
*/

int main() {
   int num1, num2, num3;
   
   cout << "Ingrese Numero:";
   cin >> num1;
   
   cout << "Ingrese Numero:";
   cin >> num2;
   
   cout << "Ingrese Numero:";
   cin >> num3;
   
   if(num1 > 0){
      cout << "Hay positivos!" << endl;
   }
   else{
      if(num2 > 0){
         cout << "Hay positivos!" << endl;
      }  
      else{
         if(num3 > 0){
            cout << "Hay positivos!" << endl;
         }
         else{
            cout << "No hay positivos :("<<endl;
         }
      }
   }
	
	return 0;
}

