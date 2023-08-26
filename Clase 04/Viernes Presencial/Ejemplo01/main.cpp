/*
Hacer un programa que simule cinco operaciones de un cajero automático.
  Debe solicitar los importes (negativo para extraccion, positivo para depósito)
  
  El programa debe informar:
  A- Si hubo al menos un deposito mayor a $50000
  B- La cantidad de depósitos realizados
  C- El total de dinero operado

 - Bandera: Variable que dependiendo del valor va a determinar si ocurrió o no
  alguna situación particular en el programa.

 - Contador: Variable numérica que sirve para acumular generalmente de 1 en 1.

 - Acumulador: Variable numérica que sirve para acumular valor numéricos no homogéneos.

*/
#include <iostream>
using namespace std;

int main(){

  float importe1, importe2, importe3, importe4, importe5;
  /// A
  bool huboDepositoMayorA50000 = false;
  /// B
  int cantidadDepositos = 0;
  /// C
  float totalDineroOperado = 0;

  cout << "Importe transaccion #1: $ ";
  cin >> importe1;
  cout << "Importe transaccion #2: $ ";
  cin >> importe2;
  cout << "Importe transaccion #3: $ ";
  cin >> importe3;
  cout << "Importe transaccion #4: $ ";
  cin >> importe4;
  cout << "Importe transaccion #5: $ ";
  cin >> importe5;

  /// A
  if (importe1 > 50000 || importe2 > 50000 || importe3 > 50000 || importe4 > 50000 || importe5 > 50000){
    huboDepositoMayorA50000 = true;
  }

  /// B
  if (importe1 > 0){
    cantidadDepositos++;
  }
  if (importe2 > 0){
    cantidadDepositos++;
  }
  if (importe3 > 0){
    cantidadDepositos++;
  }
  if (importe4 > 0){
    cantidadDepositos++;
  }
  if (importe5 > 0){
    cantidadDepositos++;
  }

  /// C
  if (importe1 < 0){
    importe1 = importe1 * (-1);
  }
  totalDineroOperado += importe1;
  
  if (importe2 < 0){
    importe2 = importe2 * (-1);
  }
  totalDineroOperado += importe2;
  
  if (importe3 < 0){
    importe3 = importe3 * (-1);
  }
  totalDineroOperado += importe3;
  
  if (importe4 < 0){
    importe4 = importe4 * (-1);
  }
  totalDineroOperado += importe4;
  
  if (importe5 < 0){
    importe5 = importe5 * (-1);
  }
  totalDineroOperado += importe5;


  if (huboDepositoMayorA50000 == true){
    cout << "A) Hubo al menos un deposito mayor a $50000" << endl;
  }
  else{
    cout << "A) No hubo ningun deposito mayor a $50000" << endl;
  }
  cout << "B) Cantidad de depositos: " << cantidadDepositos << endl;
  cout << "C) Total de dinero operado: $ " << totalDineroOperado << endl;


  return 0;
}