/**
  Hacer un programa para que el vendedor de un kiosco pueda ingresar el precio unitario de un artículo
  y la cantidad de unidades vendidas. Calcular e informar el importe total de la venta.
*/

#include <iostream>
using namespace std;

int main(){
  int unidadesVendidas;
  float precioUnitario, importe, abonaCon, vuelto;

  string nombreArticulo;

  cout << "Articulo: ";
  cin >> nombreArticulo;

  cout << "Cantidad de unidades: ";
  cin >> unidadesVendidas;

  cout << "Precio unitario: $ ";
  cin >> precioUnitario;

  importe = unidadesVendidas * precioUnitario;
  cout << endl;
  cout << nombreArticulo << " $ " << precioUnitario << " x " << unidadesVendidas << " = $" << importe;

  cout << endl << "Abona con: $ ";
  cin >> abonaCon;

  vuelto = abonaCon - importe;

  cout << endl << "Vuelto: $ " << vuelto;


  return 0;
}
