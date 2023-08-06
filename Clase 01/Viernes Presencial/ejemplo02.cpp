#include <iostream>

using namespace std;

int main()
{
    string nombreArticulo;
    int cantidadVendida;
    float precioArticulo, importeVenta, usuarioAbona, vuelto;

    cout << "INGRESE NOMBRE ARTICULO: ";
    cin >> nombreArticulo;

    cout << "INGRESE CANTIDAD VENDIDA: ";
    cin >> cantidadVendida;

    cout << "INGRESE PRECIO UNITARIO: ";
    cin >> precioArticulo;

    importeVenta = cantidadVendida*precioArticulo;

    cout << endl;

    cout << "EL IMPORTE DE VENTA ES " << importeVenta;
    cout << " Y CORRESPONDE AL ARTICULO " << nombreArticulo;

    cout << endl;
    cout << "USUARIO ABONA: ";
    cin >> usuarioAbona;

    cout << endl;
    vuelto = usuarioAbona - importeVenta;

    cout << "EL VUELTO ES: " << vuelto;

    cout << endl;
    return 0;
}
