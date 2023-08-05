/**
  Hacer un programa para un kiosco que solicite al vendedor:
  el nombre del articulo, el precio unitario del producto y la cantidad de unidades
  vendidas de ese producto y calcule informe el importe a abonar por el cliente.
*/
#include <iostream>
using namespace std;

int main(){
  int cantidadUnidades;
  float precioUnitario, importe, abonaCon, vuelto;
  string nombreArticulo;

  cout << "Nombre: ";
  cin >> nombreArticulo;

  cout << "Cantidad: ";
  cin >> cantidadUnidades;

  cout << "Precio unitario: $";
  cin >> precioUnitario;


  importe = cantidadUnidades * precioUnitario;

  cout << endl;
  cout << nombreArticulo << " : " << cantidadUnidades << " x $" << precioUnitario << " = $ " << importe << endl;

  cout << "Abona con: $";
  cin >> abonaCon;

  vuelto = abonaCon - importe;

  cout << "Vuelto $" << vuelto;

  return 0;
}
