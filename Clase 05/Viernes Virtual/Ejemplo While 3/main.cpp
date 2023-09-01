#include <iostream>
using namespace std;

int main(){
    int n, cpares = 0;

    do{
        cout << "Número: ";
        cin >> n;
        if (n % 2 == 0){
            cpares++;
        }
    }while(n != 0);

    cout << "Cantidad pares: " << cpares << endl;

    return 0;
}