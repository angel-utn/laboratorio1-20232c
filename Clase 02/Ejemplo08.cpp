/*
La asociación de medicina ha determinado las siguientes escalas de temperatura corporal:
 ---------------------------------------
 * Hipotermia: < 35 C°
 * Temperatura normal: >=35 y hasta 37.5
 * Moderadamente alto: >37.5 y hasta 38.5
 * Alto: > 38.5 hasta 39
 * Gravemente alto: mayor a 39
 ---------------------------------------
Hacer un programa que solicite la temperatura corporal e informe el estado del paciente.
*/

//COMENTARIOS:
//lo siguiente es comentario de 1 línea:
//Ejercicio
//lo siguiente es comentario de documentación: 
///Ejercicio
//lo siguiente es comentario de varias líneas:
/*
Ejercicio
*/

#include <iostream>

using namespace std;

int main()
{
	float temp;
	const float HIPOTERMIA = 35;
	const float NORMAL = 37.5;
	const float MOD_ALTO = 38.5;
	const float ALTO = 39;

	cout << "Ingrese temperatura corporal: ";
	cin >> temp;

	/* VARIANTE 1: CONSTANTES SIMBOLICAS
	if(temp < HIPOTERMIA){
    cout << "HIPOTERMIA" << endl;
	}
	else{
    if(temp >= HIPOTERMIA && temp <= NORMAL){
      cout << "NORMAL" << endl;
    }
    else{
      if(temp > NORMAL && temp <= MOD_ALTO){
        cout << "MODERADAMENTE ALTO" << endl;
      }
      else{
        if(temp > MOD_ALTO && temp <= ALTO){
          cout << "ALTO" << endl;
        }
        else{
          //if(temp > ALTO){}
          cout << "GRAVEMENTE ALTO" << endl;
        }
      }
    }
	}
	*/

	//VARIANTE 2: CONSTANTES LITERALES
	if(temp < 35f){      //la "f" es para indicarle al compilador que tome la constante como un float y no como un double
    cout << "HIPOTERMIA" << endl;
	}
	else{
    if(temp >= 35f && temp <= 37.5f){
      cout << "NORMAL" << endl;
    }
    else{
      if(temp > 37.5f && temp <= 38.5f){
        cout << "MODERADAMENTE ALTO" << endl;
      }
      else{
        if(temp > 38.5f && temp <= 39f){
          cout << "ALTO" << endl;
        }
        else{
          //if(temp > 39f){}
          cout << "GRAVEMENTE ALTO" << endl;
        }
      }
    }
	}

	return 0;
}
