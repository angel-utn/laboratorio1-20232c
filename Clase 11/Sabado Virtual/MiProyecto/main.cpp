#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int numero = 27;
    /*
    bool primo;

    primo = esPrimo(numero);

    if(primo){
      cout << "El n�mero " << numero << " es primo";
    }
    else{
      cout << "El n�mero " << numero << " no es primo";
    }
    */

    if(esPrimo(numero)){
      cout << "El n�mero " << numero << " es primo";
    }
    else{
      cout << "El n�mero " << numero << " no es primo";
    }

    return 0;
}

