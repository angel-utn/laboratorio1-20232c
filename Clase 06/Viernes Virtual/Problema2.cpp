#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int i, dado1, dado2;
	const int RONDAS = 3;
	int dif, puntajeRonda, puntajeAcum = 0;

	for(i=1; i<=RONDAS; i++){
    cout << "Dado 1: ";
    cin >> dado1;
    cout << "Dado 2: ";
    cin >> dado2;

    dif = dado1 - dado2;
    if(dif < 0){
      //dif *= -1;
      dif = dif * (-1);
    }

    if((dado1 == 1 && dado2 == 1) || (dado1 == 6 && dado2 == 6)){
       puntajeRonda = 10;
    }
    else{
      if((dif == 1) || (dif == 5)){
          puntajeRonda = 0;
          puntajeAcum = 0;
      }
      else{
        puntajeRonda = dif;
      }
    }

    puntajeAcum += puntajeRonda;

    cout << "Ronda: " << i << endl;
    cout << "Puntaje de la ronda: " << puntajeRonda << endl;
    cout << "Puntaje acumulado: " << puntajeAcum << endl;
	}

  cout << "FIN DEL JUEGO" << endl;
	cout << "Puntaje acumulado: " << puntajeAcum << endl;

	return 0;
}
