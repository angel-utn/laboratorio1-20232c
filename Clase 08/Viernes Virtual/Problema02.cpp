#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

    string categorias[10] = {"Servicios", "Alimentaci�n", "Limpieza", "Transporte",
                           "Educaci�n", "Salud", "Ocio", "Impuestos", "Vestimenta",
                           "Inversiones"};

	int dia; //1-31
	int cat;
	float importe; //>0
	//B
	float vectorB[10] = {};
	//D
	int vectorDias[31] = {};

	cout << "Ingrese d�a: ";
    cin >> dia; // 1-31

	while(dia != 0){
		cout << "Ingrese categor�a: ";
		cin >> cat; // 1-10
		cout << "Ingrese importe del gasto: ";
		cin >> importe; // float > 0

		/* B) Por cada categor�a de gasto, el nombre de la categor�a y el total acumulado en concepto de gastos del mes. */

		vectorB[cat-1] += importe;

		//D
		vectorDias[dia-1]++;

		cout << "Ingrese d�a: ";
		cin >> dia;
	}

	//INFORMO PUNTO B
	for(int i=0; i<10; i++){
		cout << "Categor�a: " << categorias[i] << " Total acumulado: $" << vectorB[i] << endl;
	}

	//CALCULO PUNTO A
	/*La categor�a de gasto que mayor dinero se haya destinado y cu�l es dicha categor�a.*/

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
	cout << "La categor�a con el mayor gasto es: " << categorias[maxCat] << " con un monto de $" << maxGasto << endl;

	//C) La cantidad de categor�as de gasto que no hayan registrado movimientos.
	//Contar cu�ntos elementos del vector "vectorB" son iguales a 0

	//D
	/*D) Por cada d�a, la cantidad de gastos que se hayan registrado.
	S�lo mostrar aquellos registros de d�as que hayan registrado gastos.
	*/

	for(int d=0; d<31; d++){
		if(vectorDias[d] > 0){
			cout << "D�a #: " << d+1 << " Cantidad de gastos: " << vectorDias[d] << endl;
		}
	}

	return 0;
}
