#include <iostream>
using namespace std;

/// es hacer un programa que pida dos numeros 
/// y muestre el mayor de ellos

int mayor(int n1, int n2);

int main() {

   int n1, n2;
   
   cout << "Ingrese numero: ";
   cin >> n1;
   cout << "Ingrese numero: ";
   cin >> n2;
   
   cout << "El mayor es: " << mayor(n1, n2) << endl;
   
	return 0;
}

int mayor(int n1, int n2){
   if(n1 > n2){
      return n1;
   }
   else{
      return n2;
   }
}



