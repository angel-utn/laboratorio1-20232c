#include <iostream>
#include <locale>

using namespace std;

void pedirNumeros(int, int );
float dividirNumeros(int, int);
int pedirNumero(int );
void pedirNumero2(int num2);

int main()
{
    setlocale(LC_ALL, "Spanish");

    int num1 = 16, num2 = 3;    //valores hardcodeados
    //int num1, num2;
    float cociente;

    //pedirNumeros(num1, num2);
    //pedirNumeros(16, 3);

    /*
    num1 = pedirNumero(num1);
    num2 = pedirNumero(num2);

    cout << endl;
    cout << "Estoy adentro de main" << endl;
    cout << "Variable num1: " << num1 << endl;
    cout << "Variable num2: " << num2 << endl;
    */

    pedirNumero2(num1);
    cout << "Estoy adentro de main" << endl;
    cout << "num1: " << num1;
    //cociente = dividirNumeros(num1, num2);

    //cout << "El cociente es: " << cociente << endl;

    return 0;
}

void pedirNumeros(int n1, int n2)
{
    cout << "Ingrese número 1: ";
    cin >> n1;
    cout << "Ingrese número 2: ";
    cin >> n2;
    cout << "Estoy adentro de pedirNumeros" << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    cout << endl;
}

/*
float dividirNumeros(int num1, int num2){
  float cociente = 0;
  if(num2 != 0){
    cociente = (float)num1 / num2;
  }
  return cociente;
}
*/

float dividirNumeros(int n1, int n2)
{
    float cociente = 0;
    if(n2 != 0)
    {
        cociente = (float)n1 / n2;
    }
    return cociente;
}

int pedirNumero(int num1)
{
    int num;
    cout << "Ingrese número: ";
    cin >> num;
    return num;
}

void pedirNumero2(int num2)
{
    cout << "Ingrese numero: ";
    cin >> num2;
    cout << "Estoy en pedirNumero2" << endl;
    cout << "num2 vale = " << num2 << endl;
    return;
    //cout << "Estoy saliendo de pedirNumero2" << endl;
}



