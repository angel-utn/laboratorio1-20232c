#include <iostream>
#include <locale>

using namespace std;

void mostrarMatriz(int mat[5][5], int filas, int col);
void ponerEnCeroMatriz(int mat[5][5], int filas, int col);

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int FILAS = 5;
    const int COL = 5;
    int mat[FILAS][COL];

    //cout << mat << endl;

    mostrarMatriz(mat, FILAS, COL);

    ponerEnCeroMatriz(mat, FILAS, COL);

    cout << endl;
    cout << "-----" << endl;
    cout << endl;

    mostrarMatriz(mat, FILAS, COL);

    return 0;
}

void mostrarMatriz(int mat[5][5], int filas, int col)
{
    int i, j;
    for(i=0; i<filas; i++)
    {
        cout << endl;
        for(j=0; j<col; j++)
        {
            cout << mat[i][j] << "\t";
        }
    }
}

//void mostrarMatriz(int mat(*)[5]){

void ponerEnCeroMatriz(int mat[5][5], int filas, int col)
{
    int i, j;
    for(i=0; i<filas; i++)
    {
        for(j=0; j<col; j++)
        {
            mat[i][j] = 0;
        }
    }
}
