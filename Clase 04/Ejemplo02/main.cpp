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

  float importe;
  /// A
  bool huboDepositoMayorA50000 = false;
  /// B
  int cantidadDepositos = 0;
  /// C
  float totalDineroOperado = 0;

  cout << "Importe transaccion #1: $ ";
  cin >> importe;

  /// A
  if (importe > 50000){
    huboDepositoMayorA50000 = true;
  }
  
  /// B
  if (importe > 0){
    cantidadDepositos++;
  }
  
  /// C
    if (importe < 0){
    importe = importe * (-1);
  }
  totalDineroOperado += importe;

  cout << "Importe transaccion #2: $ ";
  cin >> importe;

  /// A
  if (importe > 50000){
    huboDepositoMayorA50000 = true;
  }
  
  /// B
  if (importe > 0){
    cantidadDepositos++;
  }
  
  /// C
    if (importe < 0){
    importe = importe * (-1);
  }
  totalDineroOperado += importe;

  cout << "Importe transaccion #3: $ ";
  cin >> importe;

  /// A
  if (importe > 50000){
    huboDepositoMayorA50000 = true;
  }
  
  /// B
  if (importe > 0){
    cantidadDepositos++;
  }
  
  /// C
    if (importe < 0){
    importe = importe * (-1);
  }
  totalDineroOperado += importe;

  cout << "Importe transaccion #4: $ ";
  cin >> importe;

  /// A
  if (importe > 50000){
    huboDepositoMayorA50000 = true;
  }
  
  /// B
  if (importe > 0){
    cantidadDepositos++;
  }
  
  /// C
    if (importe < 0){
    importe = importe * (-1);
  }
  totalDineroOperado += importe;

  cout << "Importe transaccion #5: $ ";
  cin >> importe;

  /// A
  if (importe > 50000){
    huboDepositoMayorA50000 = true;
  }
  
  /// B
  if (importe > 0){
    cantidadDepositos++;
  }
  
  /// C
    if (importe < 0){
    importe = importe * (-1);
  }
  totalDineroOperado += importe;


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