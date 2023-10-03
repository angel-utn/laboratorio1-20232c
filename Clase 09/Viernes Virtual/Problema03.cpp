#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    /// VARIABLES PARA INGRESO DE REGISTROS
    int mes, tipoAnimal, edadAdoptante, tipoVivienda;

    int const TIPO_ANIMAL  = 6;
    int const TIPO_VIVIENDA = 5;
    string nombreAnimal[TIPO_ANIMAL] = {"Perro","Gato","Conejo","Hurón","Caballo","Oveja"};
    string nombreVivienda[TIPO_VIVIENDA] = {"Casa","Departamento","Casa Quinta","Finca","Duplex"};

    /// PTO A
    int vPTOA[TIPO_ANIMAL] = {};

    /// PTO B
    int vAcuEdad[TIPO_ANIMAL] = {}; /// ACUMULO EDAD
    int vCantidadAdoptantes[TIPO_ANIMAL] = {}; /// CUENTO OCURRENCIAS
    float promedio;

    /// PTO C
    int mPTOC[TIPO_ANIMAL][TIPO_VIVIENDA] = {};


    cout << "INGRESE MES: ";
    cin >> mes;

    while (mes != 0)
    {
        cout << "INGRESE TIPO ANIMAL: ";
        cin >> tipoAnimal;

        cout << "EDAD ADOPTANTE: ";
        cin >> edadAdoptante;

        cout << "INGRESE TIPO VIVIENDA: ";
        cin >> tipoVivienda;

        /// SE PROCESAN REGISTROS

        /// PTO A
        //vPTOA[tipoAnimal-10]= vPTOA[tipoAnimal-10]+1;
        vPTOA[tipoAnimal-10]++;

        /// PTO B
        vAcuEdad[tipoAnimal-10]+= edadAdoptante;
        vCantidadAdoptantes[tipoAnimal-10]++;

        /// PTO C
        mPTOC[tipoAnimal-10][tipoVivienda-1]++;

        cout << "INGRESE MES: ";
        cin >> mes;
    }

    system("cls");

    /// PTO A
    //    for(int i = 0; i < TIPO_ANIMAL; i++){
    //        cout << "EL TIPO ANIMAL " << nombreAnimal[i] << " FUE ADOPTADO " << vPTOA[i] << " VECES" << endl;
    //    }

    /*
        int maximoPTOA = 0;
        int indice;
        for (int i = 0; i < TIPO_ANIMAL; i++)
        {
            if(vPTOA[i]>maximoPTOA)
            {
                maximoPTOA = vPTOA[i];
                indice = i;
            }
        }
        */

    /*
    int indice = 0;
    for (int i = 1; i < TIPO_ANIMAL; i++)
    {
    if(vPTOA[i]>vPTOA[indice])
    {
        indice = i;
    }
    }
    */

    /// PTO A
    int indice = 0;
    for(int i = 0; i < TIPO_ANIMAL-1; i ++)
    {
        if(vPTOA[i]>vPTOA[i+1])
        {
            indice = i;
        }
    }

    cout << "--- PUNTO A ---" << endl;
    cout << "EL TIPO ANIMAL MAS ADOPTADO FUE " << nombreAnimal[indice] << endl;

    cout << endl << endl;

    /// PTO B
    cout << "--- PUNTO B ---" << endl;
    for (int x = 0; x < TIPO_ANIMAL; x++)
    {
        cout << "TIPO ANIMAL " << nombreAnimal[x];
        if(vCantidadAdoptantes>0)
        {
            promedio = (float)vAcuEdad[x]/vCantidadAdoptantes[x];
            cout << " EDAD PROMEDIO ADOPTANTE: " << fixed << setprecision(2) << promedio << " AÑOS" << endl;
        }
        else
        {
            cout << "SIN ADOPTANTES" << endl;
        }
    }

    cout << endl << endl;

    /// PTO C
    cout << "--- PUNTO C ---" << endl;
    for(int i = 0;  i < TIPO_ANIMAL; i++ )
    {
        cout << "TIPO ANIMAL " << nombreAnimal[i] << endl;
        for(int j = 0;  j < TIPO_VIVIENDA; j++ )
        {
            cout << "    TIPO VIVIENDA " << nombreVivienda[j] << " TUVO " << mPTOC[i][j] << " ADOPCIONES" << endl;
        }
    }

    return 0;
}
