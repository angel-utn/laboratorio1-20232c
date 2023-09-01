#include <iostream>
using namespace std;

int main(){
    int n = 1, cpares = 0;

    while(n != 0){
        cout << "Número: ";
        cin >> n;
        if (n % 2 == 0){
            cpares++;
        }
    }

    cout << "Cantidad pares: " << cpares << endl;

    return 0;
}