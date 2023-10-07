#include <iostream>
using namespace std;

// Declaración de función
void mostrarTitulo(string titulo);
float duplicar(float numeroADuplicar);
float multiplicar(float numero1, float numero2);

int main(){
    float valor;
    float numero;
    // Llamado a la función
    string titulo = "Ejemplo de funciones";
    mostrarTitulo(titulo);

    cout << "Numero a duplicar: ";
    cin >> numero;

    valor = duplicar(numero);

    cout << multiplicar(valor, 5);


    return 0;
}

// Definición de función
void mostrarTitulo(string titulo){
    cout << titulo << endl;
    cout << "---------------------------" << endl;
}

float duplicar(float numeroADuplicar){
    float numeroDuplicado;
    numeroDuplicado = numeroADuplicar * 2;
    return numeroDuplicado;
}

float multiplicar(float numero1, float numero2){
    float resultado;
    resultado = numero1 * numero2;
    return resultado;
}