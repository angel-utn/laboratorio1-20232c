/*
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo
de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
*/
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

int numero,minimo,maximo,x;
bool hayPositivos = false, hayNegativos = false;

for (x=1;x<=10;x++){
    cout<<"Ingrese numero #"<<x<<":"<<endl;
    cin >> numero;

    /*
    if((numero > 0) && !(hayPositivos)){
        hayPositivos = true;
        minimo = numero;
    }
    else if((numero > 0) && (numero < minimo)){
        minimo = numero;
    }
    else if((numero < 0 ) && !(hayNegativos)){
        hayNegativos = true;
        maximo = numero;
    }
    else if((numero < 0) && (numero > maximo)){
        maximo = numero;
    }
    */

     if((numero > 0) && (!(hayPositivos)||(numero < minimo))){
        hayPositivos = true;
        minimo = numero;
    }
     else if((numero < 0 ) && (!(hayNegativos)||(numero > maximo))){
        hayNegativos = true;
        maximo = numero;
    }


    /*
    if ((numero >0)&&(x==1)){
            minimo=numero;
        }
        else if ((numero <0)&&(x==1)){
            maximo=numero;
        }
        else if ((numero>0) && (numero<minimo)){
        minimo=numero;
    }
        else if ((numero<0) && (numero>maximo)){
        maximo=numero;
    }
    */
}

cout << "El maximo negativo es:"<<maximo<<endl;
cout << "El minimo positivo es:"<<minimo<<endl;


	return 0;
}
