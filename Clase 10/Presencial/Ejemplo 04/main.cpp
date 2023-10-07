#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamanio);
void mostrarVector(int vec[], int tamanio);

int main(){
    const int TAM = 5;
    int vectorcito[TAM];
    int otroVector[10];
    cargarVector(vectorcito, TAM);
    cout << endl;
    mostrarVector(vectorcito, TAM);
    cout << endl;
    cargarVector(otroVector, 10);
    cout << endl;
    mostrarVector(otroVector, 10);
    cout << endl;


    return 0;
}

void cargarVector(int vec[], int tamanio){
    int i;
    for(i=0; i<tamanio; i++){
        cout << "Valor #" << i+1 << ": ";
        cin >> vec[i];
    }
}
void mostrarVector(int vec[], int tamanio){
int i;
    for(i=0; i<tamanio; i++){
        //cout << "Valor #" << i+1 << ": ";
        cout << vec[i] << " ";
    }
}
