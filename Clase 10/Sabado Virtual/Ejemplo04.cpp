#include <iostream>
#include <locale>

using namespace std;

void ponerEnCeroVector(int vec[], int tam);
void ponerEnCeroVector2(int *vec, int tam);
//void ponerEnCeroVector(int [], int);
void mostrarVector(int vec[], int tam);
void mostrarVector2(int *vec, int tam);

int main()
{
    setlocale(LC_ALL, "Spanish");

    const int TAM = 10;
    int vec[TAM];

    //cout << vec << endl;

    //mostrarVector(vec, TAM);
    mostrarVector2(vec, TAM);

    //ponerEnCeroVector(vec, TAM);
    ponerEnCeroVector2(vec, TAM);

    cout << "----------" << endl;
    //mostrarVector(vec, TAM);
    mostrarVector2(vec, TAM);

    return 0;
}

void ponerEnCeroVector(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vec[i] = 0;
    }
}

void mostrarVector(int vec[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout << vec[i] << "\t";
    }
}

void ponerEnCeroVector2(int *vec, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vec[i] = 0;
    }
}

void mostrarVector2(int *vec, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        cout << vec[i] << "\t";
    }
}
