/* Hacer un programa donde se pida el ingreso de cinco n�meros enteros y determinar e informar
cu�ntos de esos n�meros son positivos */

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int numero, i;
	int cont = 0;

	for(i=0; i<5; i++){
      cout << "Ingrese n�mero #" << i + 1 << ": ";
      cin >> numero;

      if(numero > 0){
        cont++;
      }
	}

	cout << "Cantidad de numeros positivos: " << cont << endl;

	return 0;
}
