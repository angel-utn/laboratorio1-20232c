/*
Hacer un programa que simule tres operaciones de un cajero autom�tico.
    Debe solicitar el importe (negativo para extraccion, positivo para dep�sito)
    El programa debe informar:
    A- Si hubo al menos un deposito mayor a $50000
    B- La cantidad de dep�sitos realizados
    C- El total de dinero operado
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    //const float PI = 3.14; CONSTANTE SIMB�LICA
    float operacion1, operacion2, operacion3;
    int contador = 0;
    float total = 0.0f;
    bool huboDepMayorA50000 = false;

    cout << "Ingrese operaci�n #1: $";
    cin >> operacion1;

    /*if(operacion1 > 50000)
    {
        huboDepMayorA50000 = true;
    }  */

    if(operacion1 > 0){
      //contador = contador + 1;
      //contador += 1;
      contador++;
      //total += operacion1;
    }

    if(operacion1 < 0){
      operacion1 = operacion1 * (-1);
	  //operacion1 = -operacion1
    }

    /*if(operacion1 < 0){
      //total += operacion1 * (-1);
      total -= operacion1;
    }

    if(operacion1 >=0){
      total += operacion1;
    }*/

    total += operacion1;

    cout << "Ingrese operaci�n #2: $";
    cin >> operacion2;

    /*if(operacion2 > 50000)
    {
        huboDepMayorA50000 = true;
    }  */

    if(operacion2 > 0){
      contador++;
    }

    /*if(operacion2 < 0){
      //total += operacion1 * (-1);
      total -= operacion2;
    }      */

    if(operacion2 < 0){
      operacion2 = operacion2 * (-1);
    }

    total += operacion2;

    cout << "Ingrese operaci�n #3: $";
    cin >> operacion3;

    /*if(operacion3 > 50000)
    {
        huboDepMayorA50000 = true;
    } */

    if(operacion3 > 0){
      contador++;
    }

    /*if(operacion3 < 0){
      //total += operacion1 * (-1);
      total -= operacion3;
    }  */

    if(operacion3 < 0){
      operacion3 = operacion3 * (-1);
      //operacion3 *= -1;
    }

    total += operacion3;

    //RESULTADOS
	if((operacion1 > 50000) || (operacion2 > 50000) || (operacion3 > 50000))
    {
        huboDepMayorA50000 = true;
    }

    if(huboDepMayorA50000 == true)
    {
        cout << "Hubo un dep�sito mayor a $50000" << endl;
    }

    if(contador == 0){
      cout << "No hubo dep�sitos" << endl;
    }
    else{
      cout << "Cantidad de dep�sitos efectuados: " << contador << endl;
    }

    //total = operacion1 + operacion2 + operacion3;

    cout << "Cantidad total de dinero operado: $" << total << endl;

    return 0;
}
