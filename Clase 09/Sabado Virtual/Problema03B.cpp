#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    const int ANIMALES = 6;
    int mes;  //1-12
    int animal; //10-15
    int edad;
    int vivienda; //1-5
    string nomAnimal[ANIMALES] = {"Perro", "Gato", "Conejo", "Hurón", "Caballo", "Oveja"};
    int i, j;
    //A
    int matAB[ANIMALES][2] = {};
    int indA = 0;
    int maxA;
    //B

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
        //B
        matAB[animal - 10][0] += edad;
        //A
        matAB[animal - 10][1] ++;

        cout << "Mes: ";
        cin >> mes;
    }

    //A
    maxA = matAB[0][1];
    for(i=1; i<ANIMALES; i++)
    {
        if(matAB[i][1] > maxA)
        {
            maxA = matAB[i][1];
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
        if(matAB[i][1] > 0)
        {
            cout << (float)matAB[i][0] / matAB[i][1] << endl;
        }
        else
        {
            cout << "no hubo adopciones" << endl;
        }
    }

    return 0;
}
