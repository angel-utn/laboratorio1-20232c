#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Spanish");

  int num, digito, digitosPares = 0, digitos = 0, numOriginal;
  bool todosPares = true;

  cout << "Ingrese un número: ";
  cin >> num;

  numOriginal = num;

  while(num > 0){
    digitos++;
    num /= 10;
  }

  num = numOriginal;

  while(num > 0){
      digito = num % 10;

      if(digito % 2 == 0){
          digitosPares++;
      }
      else{
        todosPares = false;
      }

      num = num / 10;
  }

  if(digitos == digitosPares){
    cout << "TODOS PARES" << endl;
  }
  else{
    cout << "NO SON TODOS PARES" << endl;
  }

  cout << endl << endl;

  if(todosPares == true){
      cout << "TODOS PARES" << endl;
  }
  else{
      cout << "NO SON TODOS PARES" << endl;
  }

  return 0;
}
