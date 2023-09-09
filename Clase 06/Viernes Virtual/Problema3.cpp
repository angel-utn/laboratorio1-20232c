#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int ID_esp, nro_Consulta, duracion, dia, hora;
	//PUNTO A
	int acumA = 0, contA = 0;
	//PUNTO D
	int costoTotal = 0;
	const int CONSULTA = 2000;
	const int CONSULTA_30MIN = 500;
	const float RECARGO_FINDE = 1.25f;
	int costoParcial;

	cout << "Ingrese especialidad: ";
	cin >> ID_esp;

	while(ID_esp != 0){

    cout << "Ingrese número de consulta: ";
    cin >> nro_Consulta;

    while(nro_Consulta >= 0){

      cout << "Ingrese duración: ";
      cin >> duracion;
      cout << "Ingrese día: ";
      cin >> dia;
      cout << "Ingrese hora: ";
      cin >> hora;

      //PROCESO

      //PUNTO D
      costoParcial = CONSULTA;
      //duró más de 30 min?
      //VERDADERO: costoParcial += CONSULTA_30MIN;

      //fue en fin de semana?
      //VERDADERO: costoParcial *= RECARGO_FINDE;
      //OTRA FORMA: costoParcial = costoParcial * RECARGO_FINDE;

      costoTotal += costoParcial;

      //cout << "Ingrese especialidad: ";
      //cin >> ID_esp;
      cout << "Ingrese número de consulta: ";
      cin >> nro_Consulta;

    } // fin del grupo

    //informo punto A (5 veces)
    //acumA = 0;
    //contA = 0;

    //informo punto B (5 veces)
    //reseteo variables

    cout << "Ingrese especialidad: ";
	  cin >> ID_esp;
	} // fin del lote

	//informo punto C (1 vez)
	//no resetear variables

	//informo punto D (1 vez)
	//no resetear variables

	return 0;
}
