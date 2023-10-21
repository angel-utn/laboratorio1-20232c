#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int mat[5][5] = {1,2,3,4,5,5,4,19,10,11,1,1,1,1,1,9,8,4,2,-5,10,10,10,10,10};
    if(EsMatrizSimoniana(mat)){
        cout << "ES SIMONIANA" << endl;
    }
    else{
        cout << "NO SIMONIANA";
    }

    return 0;
}
