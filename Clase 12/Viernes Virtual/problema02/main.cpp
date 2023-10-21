#include <iostream>

using namespace std;

int main()
{
    int dia, artista, genArtista, minShow, cantCan;

    /// PTO A
    int mPTOA[31][25] {};

    /// PTO A BIS
    int mayorCantMinutos = 0;
    int mayorGeneroMusical;


    /// PTO B
    bool mPTOB[31][3] {}; /// QUEDA TODO EN FALSE


    /// PTO C
    int vPTOC[31] {};

    cout << "NUMERO DIA: ";
    cin >> dia;

    while (dia != 0)
    {
        cout << "NUMERO ARTISTA: ";
        cin >> artista;

        cout << "GENERO MUSICAL: ";
        cin >> genArtista;

        cout << "MINUTOS SHOW: ";
        cin >> minShow;

        cout << "CANTIDAD CANCIONES: ";
        cin >> cantCan;


        /// INGRESO CADA UNO DE LOS REGISTROS

        /// PTO A
        if(dia==3)
        {
            mPTOA[artista-100][genArtista-1] += minShow;
        }

        /// PTO A BIS
        if(dia==3)
        {
            if(minShow > mayorCantMinutos)
            {
                mayorCantMinutos = minShow;
                mayorGeneroMusical = genArtista;
            }
        }

        /// PTO B
        mPTOB[artista-100][dia-1] = true;

        /// PTO C
        vPTOC[artista-100] += cantCan;


        cout << "NUMERO DIA: ";
        cin >> dia;
    }

    cout << endl;
    cout << endl;

    /// PTO A BIS
    cout << "PTO A BIS) MAS MINUTOS TOCO DIA 3: GENERO " << mayorGeneroMusical << endl;


    cout << endl;
    cout << endl;
    /// PTO A
    mayorCantMinutos = 0;

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 25; j++ )
        {
            if(mPTOA[i][j] > mayorCantMinutos)
            {
                mayorGeneroMusical = j +1;
                /// NO OLVIDAR ACTUALIZAR MAYORCANTMINUTOS
                mayorCantMinutos = mPTOA[i][j];
            }
        }
    }

    cout << "PTO A) MAS MINUTOS TOCO DIA 3: GENERO " << mayorGeneroMusical << endl;


    cout << endl;
    cout << endl;

    /// PTO B
    int totalArtistas = 0;
    for (int i = 0; i < 31; i++)
    {
        if(mPTOB[i][0] && mPTOB[i][1] && mPTOB[i][2])
        {
            totalArtistas++;
        }
    }

    cout << "PTO B) LA CANTIDAD ARTISTAS TRABAJARON 3 DIAS: " << totalArtistas << endl;

    cout << endl;
    cout << endl;
    cout << "PTO C) NUMERO DE ARTISTAS QUE TOCARON MAS DE 15 TEMAS:" << endl;

    /// PTO C
    for (int i = 0; i < 31; i++)
    {
        if(vPTOC[i] > 15)
        {
            cout << "\t" << i+100 << endl;
            //cout << "\t" << i+100 << " -> " << vPTOC[i] << endl;
        }
    }

    return 0;
}
