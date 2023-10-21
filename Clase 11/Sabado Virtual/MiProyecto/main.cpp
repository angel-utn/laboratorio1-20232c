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
      cout << "El número " << numero << " es primo";
    }
    else{
      cout << "El número " << numero << " no es primo";
    }
    */

    if(esPrimo(numero)){
      cout << "El número " << numero << " es primo";
    }
    else{
      cout << "El número " << numero << " no es primo";
    }

    return 0;
}

