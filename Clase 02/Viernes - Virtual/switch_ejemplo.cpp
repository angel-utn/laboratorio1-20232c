#include <iostream>
using namespace std;

int main() {
   char fp;
   
   cout << "Ingrese forma de pago: ";
   cin >> fp;
   
   switch(fp){
      case 'E':
      case 'e':
         cout << "Efectivo" << endl;
         break;
         
      case 'T':
      case 't':
         cout << "Tarjeta" << endl;
         break;
      
      case 'C':
      case 'c':
         cout << "Cheque" << endl;
         break;
   default:
      cout << "Forma de PAgo no valida" << endl;
   }
	
	return 0;
}

