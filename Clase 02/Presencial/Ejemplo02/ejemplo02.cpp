/**
 * La asociación de medicina ha determinado las siguientes escalas de
 * temperatura corporal:
 * ---------------------------------------
 * Hipotermia: < 35 C°
 * Temperatura normal: >=35 y hasta 37.5
 * Moderadamente alto: >37.5 y hasta 38.5
 * Alto: > 38.5 hasta 39
 * Gravemente alto: mayor a 39  
 * 
 * Hacer un programa que solicite la temperatura corporal e informe el
 * estado del paciente.
 * 
*/
#include <iostream>
using namespace std;

int main(){
  float temperaturaCorporal;
  string estadoPaciente;

  cout << "Ingresar temperatura corporal: C ";
  cin >> temperaturaCorporal;

  if (temperaturaCorporal < 35){
    estadoPaciente = "Hipotermia";
  }
  else{
    if (temperaturaCorporal >= 35 && temperaturaCorporal <= 37.5){
      estadoPaciente = "Temperatura normal";
    }
    else{
      if (temperaturaCorporal > 37.5 && temperaturaCorporal <= 38.5){
        estadoPaciente = "Moderadamente alto";
      }
      else{
        if (temperaturaCorporal > 38.5 && temperaturaCorporal <= 39){
          estadoPaciente = "Fiebre Alta";
        }
        else{
          estadoPaciente = "Fiebre gravemente alta";
        }
      }
    }  
  }

  cout << "El estado del paciente es: " << estadoPaciente << endl;

  return 0;
}