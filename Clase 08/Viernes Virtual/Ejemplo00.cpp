#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

	const int TAM = 10;
	int tamanio = 10;

	int mi_vector[TAM];
	int mi_vector_2[10];
	int mi_vector_3[tamanio];   // LABORATORIO 2

	float vec[TAM];

	int i;

	for(i=0; i<TAM; i++){
		cout << mi_vector[i] << endl;
	}

	return 0;
}
