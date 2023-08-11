/*

*/
#include <iostream>
using namespace std;

int main(){
  string formaPago;
  char formaDePago;

  // Asigna a formaPago el texto A
  formaPago = "A";

  // Asigna a formaDePago el caracter A
  formaDePago = 'A';


  if (formaPago == "A"){
     cout << "La variable formaPago tiene el texto A" << endl;
  }
  if (formaDePago == 'A'){
    cout << "La variable formaDePago tiene el caracter A" << endl;
  }

  return 0;
}
