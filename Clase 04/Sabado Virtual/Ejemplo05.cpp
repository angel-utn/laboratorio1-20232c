/* Hacer un programa donde se pida el ingreso de cinco números enteros y determinar e informar
cuántos de esos números son positivos */

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int numero, i;
	int cont = 0;

	for(i=0; i<5; i++){
      cout << "Ingrese número #" << i + 1 << ": ";
      cin >> numero;

      if(numero > 0){
        cont++;
      }
	}

	cout << "Cantidad de numeros positivos: " << cont << endl;

	return 0;
}
