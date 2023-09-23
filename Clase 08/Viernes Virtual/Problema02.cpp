#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

    string categorias[10] = {"Servicios", "Alimentación", "Limpieza", "Transporte",
                           "Educación", "Salud", "Ocio", "Impuestos", "Vestimenta",
                           "Inversiones"};

	int dia; //1-31
	int cat;
	float importe; //>0
	//B
	float vectorB[10] = {};
	//D
	int vectorDias[31] = {};

	cout << "Ingrese día: ";
    cin >> dia; // 1-31

	while(dia != 0){
		cout << "Ingrese categoría: ";
		cin >> cat; // 1-10
		cout << "Ingrese importe del gasto: ";
		cin >> importe; // float > 0

		/* B) Por cada categoría de gasto, el nombre de la categoría y el total acumulado en concepto de gastos del mes. */

		vectorB[cat-1] += importe;

		//D
		vectorDias[dia-1]++;

		cout << "Ingrese día: ";
		cin >> dia;
	}

	//INFORMO PUNTO B
	for(int i=0; i<10; i++){
		cout << "Categoría: " << categorias[i] << " Total acumulado: $" << vectorB[i] << endl;
	}

	//CALCULO PUNTO A
	/*La categoría de gasto que mayor dinero se haya destinado y cuál es dicha categoría.*/

	float maxGasto = 0.0f;
	int maxCat;

	maxGasto = vectorB[0];
	maxCat = 0;

	for(int i=1; i<10; i++){
		if(vectorB[i] > maxGasto){
			maxGasto = vectorB[i];
			maxCat = i;
		}
	}

	//INFORMO PUNTO A
	cout << "La categoría con el mayor gasto es: " << categorias[maxCat] << " con un monto de $" << maxGasto << endl;

	//C) La cantidad de categorías de gasto que no hayan registrado movimientos.
	//Contar cuántos elementos del vector "vectorB" son iguales a 0

	//D
	/*D) Por cada día, la cantidad de gastos que se hayan registrado.
	Sólo mostrar aquellos registros de días que hayan registrado gastos.
	*/

	for(int d=0; d<31; d++){
		if(vectorDias[d] > 0){
			cout << "Día #: " << d+1 << " Cantidad de gastos: " << vectorDias[d] << endl;
		}
	}

	return 0;
}
