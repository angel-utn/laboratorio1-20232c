#include <iostream>
using namespace std;

/***
   Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para    cada una de las cuatros semanas del mes. 

   El programa debe listar la recaudación promedio    por semana y el porcentaje de recaudación por semana.


   DATOS DE ENTRADA
   recaudacion1, recaudacion2, recaudacion3, recaudacion4

   DATOS DE SALIDA
   Promedio
   Porcentaje1, Porcentaje2, Porcentaje3, Porcentaje4

   Operaciones:
   total =  recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4 
   Promedio = total / 4


   Porcentaje1 = Recaudacion1 * 100 / total
   Porcentaje2 = Recaudacion2 / total * 100 
   Porcentaje3 = (Recaudacion3 * 100) / total
   Porcentaje4 = (Recaudacion4 * 100) / total

   2 * 2 / 2 => 2
   2 / 2 * 2 => 2

*/

int main() {
   /// Declaraciones
   int recaudacion1, recaudacion2, recaudacion3, recaudacion4, total;
   float promedio, porcentaje1, porcentaje2, porcentaje3, porcentaje4;
   
   /// Datos de entrada
   cout << "Recaudacion semana 1: ";
   cin >> recaudacion1;
   
   cout << "Recaudacion semana 2: ";
   cin >> recaudacion2;
   
   cout << "Recaudacion semana 3: ";
   cin >> recaudacion3;
   
   cout << "Recaudacion semana 4: ";
   cin >> recaudacion4;
   
   /// Proceso   
   total = recaudacion1+recaudacion2+recaudacion3+recaudacion4;
   promedio = total / 4.0f;
   
   porcentaje1 = (float)recaudacion1 / total * 100.0f ;
   porcentaje2 = 100.0f * recaudacion2/ total ;
   porcentaje3 = recaudacion3 * 100.0f / total;
   porcentaje4 = recaudacion4 * 100.0f / total;
   
   /// Datos de Salida   
   cout << "El promedio es: " << promedio << endl;
   
   
   cout << endl;
   
   cout << "Porcentaje semana 1: " << porcentaje1 << endl;
   cout << "Porcentaje semana 2: " << porcentaje2 << endl;
   cout << "Porcentaje semana 3: " << porcentaje3 << endl;
   cout << "Porcentaje semana 4: " << porcentaje4 << endl;
	
	return 0;
}

