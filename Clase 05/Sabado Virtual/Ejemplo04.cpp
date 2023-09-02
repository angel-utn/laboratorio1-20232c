/*
El influencer Santiago Laratea organizó una colecta para recaudar fondos para un
importante club de Buenos Aires. El objetivo es cubrir los 500 mil pesos y para ello
cualquier persona puede aportar la cantidad de dinero que desee. Por cada aporte
de dinero se registra el monto donado. No se sabe la cantidad de aportantes que
habrá. Pero el club ha dejado claro que en cuanto se cubra la deuda de 500 mil
pesos no se aceptarán más donaciones.
Se pide hacer un programa que permita cargar las donaciones siguientes las
reglas mencionadas anteriormente y calcular:
- La cantidad de donaciones de la colecta.
- El total recaudado.
- El monto de la colecta más generoso.
- La cantidad de donaciones que superaron el 1% de la deuda.
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const float DEUDA = 500000.0f;
    float donacion;
    float recaudacion = 0.0f;
    //A
    int cantDonaciones = 1;
    //C
    float maximo = 0.0f;
    //D
    int cantDonacionesQueSuperaron1PorCiento = 0;

    cout << "Ingresar donación: ";
    cin >> donacion;

    //A
	//cantDonaciones++;
	
	//B
    recaudacion += donacion;

    //C
    if(donacion > maximo)
    {
        maximo = donacion;
    }

    //D
    if(donacion > DEUDA * 0.01f)
    {
        cantDonacionesQueSuperaron1PorCiento++;
    }

    while(recaudacion < DEUDA)
    {
        cout << "Ingresar donación: ";
        cin >> donacion;
		
		//PROCESO
		
		//A
		cantDonaciones++;
		//B
		recaudacion += donacion;
		//C
		if(donacion > maximo)
		{
			maximo = donacion;
		}
		//D
		if(donacion > DEUDA * 0.01f)
		{
			cantDonacionesQueSuperaron1PorCiento++;
		}
		
    }

    //A
    cout << "Cantidad de donaciones: " << cantDonaciones << endl;
    //B
    cout << "Total recaudado: $" << recaudacion << endl;
    //C
    cout << "El monto de la donación más generosa: $" << maximo << endl;
    //D
    cout << "La cantidad de donaciones que superaron el 1% de la deuda es de: " << cantDonacionesQueSuperaron1PorCiento << endl;

    return 0;
}
