#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");

    int miNumero = 8;

    {
        int miNumero = 16;
        cout << "miNumero vale = " << miNumero << endl;
    }

    cout << "miNumero vale = " << miNumero << endl;

    return 0;
}
