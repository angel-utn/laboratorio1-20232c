#include <iostream>
using namespace std;
#include <cmath>

int main(){
    //Vamos a utiliza la función pow(base, exponente) para potenciación
    int numero, numeroOriginal, digitos = 0, i, digito;
    cout << "Ingresar número: ";
    cin >> numero;
    numeroOriginal = numero;

    while(numero > 0){
        digitos++;
        numero /= 10; // numero = numero / 10;
    }

    numero = numeroOriginal;
    
    for(i=digitos-1; i>=0; i--){
        digito = numero / (int) pow(10, i);
        cout << digito << endl;
        numero = numero % (int) pow(10, i);
    }

    return 0;
}