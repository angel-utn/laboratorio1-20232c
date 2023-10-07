#include <iostream>
using namespace std;

void intercambiar(int &numero1, int &numero2);

void intercambiar(int &numero1, int &numero2){
    cout << "Numero1: " << numero1 << endl;
    cout << "Numero2: " << numero2 << endl;
    int aux = numero1;
    numero1 = numero2;
    numero2 = aux;
    cout << "Numero1: " << numero1 << endl;
    cout << "Numero2: " << numero2 << endl;
}

int main(){
    int a, b;
    a = 10;
    b = 100;
    
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    intercambiar(a, b);
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;


    return 0;
}