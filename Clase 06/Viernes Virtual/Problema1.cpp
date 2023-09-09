#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

	int n, i, minDiv = 0, maxDiv = 0;

	cout << "Ingrese un número: ";
	cin >> n;

	for(i = 2; i < n; i++){
    if(n % i == 0){
      if(minDiv == 0){
        minDiv = i;
      }
      maxDiv = i;
    }
	}

	if(minDiv == 0){
    cout << "El número " << n << " es primo" << endl;
	}
	else{
    cout << "Mínimo divisor: " << minDiv << endl;
    cout << "Máximo divisor: " << maxDiv << endl;
	}

	return 0;
}
