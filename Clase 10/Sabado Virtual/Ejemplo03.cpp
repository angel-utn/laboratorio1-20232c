#include <iostream>
#include <locale>
#include <ctime>  // para trabajar con time
#include <cstdlib>  // para trabajar con rand

using namespace std;

void hacerNumeroAleatorio(int &num);

int main()
{
    setlocale(LC_ALL, "Spanish");

    srand(time(0)); // semilla o seed

    int num = -1;

    cout << "MAIN: El valor de num ANTES es: " << num << endl;

    hacerNumeroAleatorio(num);

    cout << "MAIN: El valor de num DESPUES es: " << num << endl;

    return 0;
}

void hacerNumeroAleatorio(int &num)
{
    num = rand() % 6 + 1;
    //RESTOS POSIBLES AL DIVIDIR POR 6 SON: 0, 1, 2, 3, 4 Y 5
    cout << "Dentro de hacerNumeroAleatorio, el valor de num es: " << num << endl;
}
