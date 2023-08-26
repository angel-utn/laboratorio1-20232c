#include <iostream>
using namespace std;

int main() {
   /// AND *
   /// OR  +
   /// true AND false => 1 * 0 => 0
   /// true OR false => 1 + 0 => 1
   /// true OR true => 1 + 1 => 2 => 1
   /// true OR true OR true => 1 + 1 + 1 => 3 => 1
   /// true OR true AND false => 1 + 1 * 0 => 1
   
   bool valor = false;
   
   int entero = 4.5; /// 4
   
   ///cout << entero;
      
   cout << "Valor: " << valor ;
	
	return 0;
}

