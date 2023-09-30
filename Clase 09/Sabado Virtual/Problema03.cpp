#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    const int ANIMALES = 6;
    const int VIVIENDAS = 5;
    int mes;  //1-12
    int animal; //10-15
    int edad;
    int vivienda; //1-5
    string nomAnimal[ANIMALES] = {"Perro", "Gato", "Conejo", "Hurón", "Caballo", "Oveja"};
    string nomViv[VIVIENDAS] = {"Casa", "Departamento", "Casaquinta", "Finca", "Duplex"};
    int i, j;
    //A
    int puntoA[ANIMALES] = {};
    int indA = 0;
    int maxA;
    //B
    int puntoB[ANIMALES] = {};
    //C
    int matC[ANIMALES][VIVIENDAS] = {};

    cout << "Mes: ";
    cin >> mes;

    while(mes != 0)
    {
        cout << "Animal: ";
        cin >> animal;
        cout << "Edad: ";
        cin >> edad;
        cout << "Vivienda: ";
        cin >> vivienda;

        //PROCESO
        //A
        puntoA[animal - 10] ++;
        //B
        puntoB[animal - 10] += edad;
        //C
        matC[animal - 10][vivienda - 1]++;

        cout << "Mes: ";
        cin >> mes;
    }

    //A
    maxA = puntoA[0];
    for(i=1; i<ANIMALES; i++)
    {
        if(puntoA[i] > maxA)
        {
            maxA = puntoA[i];
            indA = i;
        }
    }

    cout << "----------" << endl;
    //cout << indA << endl;
    cout << "A-El tipo de animal más adoptado es: " << indA + 10 << "-->" << nomAnimal[indA] << endl;
    cout << "----------" << endl;
    cout << "B-Promedios de edad por tipo de animal: " << endl;
    for(i=0; i<ANIMALES; i++)
    {
        cout << "Animal: " << i + 10 << "-->" << nomAnimal[i] << " ";
        if(puntoA[i] > 0)
        {
            cout << (float)puntoB[i] / puntoA[i] << endl;
        }
        else
        {
            cout << "no hubo adopciones" << endl;
        }
    }

    cout << "----------" << endl;
    //INFORMO PUNTO C
    for(i=0; i<ANIMALES; i++)
    {
        cout << "Tipo de animal: " << i + 10 << "-->" << nomAnimal[i] << endl;
        for(j=0; j<VIVIENDAS; j++)
        {
            if(matC[i][j] > 0)
            {
                cout << "\tTipo de vivienda: " << j + 1 << "-->" << nomViv[j] << ": " << matC[i][j] << endl;
            }
        }
    }

    return 0;
}
