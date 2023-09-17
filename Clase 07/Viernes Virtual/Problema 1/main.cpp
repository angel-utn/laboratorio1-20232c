#include <iostream>
using namespace std;

int main(){
    int numero, digito;
    cout << "Ingresar número: ";
    cout << endl;
    cin >> numero;
    cout << endl;
    
    while (numero > 0){
        digito = numero % 10;
        cout << digito << endl;
        numero = numero / 10;
    }

    return 0;   
}