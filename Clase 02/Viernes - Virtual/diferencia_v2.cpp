#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar por teclado dos números y luego 
informar por pantalla la diferencia absoluta entre ambos. 

Ejemplo 1:
Si se ingresan 3 y 8, se emite 5. 
Si se ingresan 8 y 3, se emite 5. 
Ejemplo 2: 
Si se ingresan -3 y 9, se emite 12. 
Si se ingresan -12 y -1, se emite 11.


DATOS DE ENTRADA
num1, num2

DATOS SALIDA
diferencia

Operacion:

Diferencia = num1 - num2 

Diferencia = Diferencia * (-1) => Diferencia < 0


*/

int main() {
   float num1, num2, diferencia;
   
   cout << "Ingrese numero: ";
   cin >> num1;
   
   cout << "Ingrese numero: ";
   cin >> num2;
   
   diferencia = num1 - num2;   
   
   if(diferencia < 0){
      //diferencia = diferencia * (-1);
      // diferencia *= -1;
      diferencia = -diferencia;
   }
   
   cout << "La diferencia absoluta es: " << diferencia;
   
   return 0;
}

