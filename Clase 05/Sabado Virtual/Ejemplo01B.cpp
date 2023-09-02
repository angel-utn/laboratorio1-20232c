#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const int NOTAS = 10;
    int i, nota, maxima = 0;

    for(i=1; i<=NOTAS; i++)
    {
        cout << "Ingrese nota #" << i << ": ";
        cin >> nota;

        if(nota > maxima)
        {
            maxima = nota;
        }
    }

    cout << "La nota máxima es: " << maxima << endl;

    return 0;
}
