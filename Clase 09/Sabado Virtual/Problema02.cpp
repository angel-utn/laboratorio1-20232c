#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int dia; //1-31
    int categoria; //1-10
    float importe;
    const int CAT = 11;
    string nombres[CAT] = {"Servicios", "Alimentaci�n", "Limpieza", "Transporte", "Educaci�n", "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones", "Mascotas"};
    //A
    float gastoXCat[CAT] = {};
    float maxGastoCat = 0;
    int maxCat, i;
    //C
    int cont = 0;
    //D
    const int DIAS = 31;
    int cantGastosXDia[DIAS] = {};

    cout << "D�a: ";
    cin >> dia;

    while(dia != 0)
    {
        cout << "Categor�a: ";
        cin >> categoria;
        cout << "Importe: $";
        cin >> importe;

        //proceso
        //A
        gastoXCat[categoria - 1] += importe;

        //D
        cantGastosXDia[dia - 1] ++;

        cout << "D�a: ";
        cin >> dia;
    }

    //A
    for(i=0; i<CAT; i++)
    {
        if(gastoXCat[i] > maxGastoCat)
        {
            maxGastoCat = gastoXCat[i];
            maxCat = i;
        }
    }
    /*   OTRA ALTERNATIVA
    maxGastoCat = gastoXCat[0];
    maxCat = 0;

    for(i=1; i<CAT; i++){
      if(gastoXCat[i] > maxGastoCat){
        maxGastoCat = gastoXCat[i];
        maxCat = i;
      }
    }
    */

    //INFORMO PUNTO A
    cout << "La categor�a de gasto que mayor dinero destin� es: " << maxCat + 1 << ": " << nombres[maxCat] << endl;

    cout << "----------" << endl;

    //INFORMO PUNTO B
    for(i=0; i<CAT; i++)
    {
        cout << "Categor�a " << i + 1 << ": " << nombres[i] << " Total acumulado: $" << gastoXCat[i] << endl;
    }

    //CALCULO E INFORMO PUNTO C
    for(i=0; i<CAT; i++)
    {
        if(gastoXCat[i] == 0)
        {
            cont++;
        }
    }

    cout << "----------" << endl;

    if(cont > 0)
    {
        cout << "La cantidad de categor�as que no registraron movimientos es de: " << cont << endl;
    }
    else
    {
        cout << "Todas las categor�as registraron movimientos" << endl;
    }

    //CALCULO E INFORMO PUNTO D
    for(i=0; i<DIAS; i++)
    {
        if(cantGastosXDia[i] > 0)
        {
            cout << "La cantidad de gastos del d�a " << i + 1 << " es de: " << cantGastosXDia[i] << endl;
        }
    }

    return 0;
}
