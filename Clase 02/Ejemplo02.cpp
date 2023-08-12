/*
Sospecha de Laravirus: temperatura > 37.5 Y dolor de cabeza
*/

#include <iostream>

using namespace std;

int main()
{
    float temperatura;
    char dc;

    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    cout << endl << "Ingrese si presenta dolor de cabeza (S/N): ";
    cin >> dc;

    if(temperatura > 37.5 && (dc == 'S' || dc == 's'))
    {
        cout << "Posible Laravirus" << endl;
    }
    else
    {
        cout << "Todo bien" << endl;
    }

    return 0;
}
