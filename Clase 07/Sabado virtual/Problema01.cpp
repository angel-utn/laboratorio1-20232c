#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  int num, digito;

  cout << "Ingrese un número: ";
  cin >> num;

  while(num > 0){
      digito = num % 10;
      cout << digito << endl;
      num = num / 10;
  }

  return 0;
}
