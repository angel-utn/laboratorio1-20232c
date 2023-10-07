#include <iostream>
using namespace std;

int por_valor(int n1);
void por_ref(int &k);

int main() {
   int n1=10, n2 = 15;
   
   por_ref(n1);
	
   cout << "n1: " <<  n1 << endl;
   
	return 0;
}

/// como es por valor, lo que hace es crear una variable nueva
int por_valor(int k){
   k = 100;
   
   cout << "k: "<< k << endl; 
   return k;
}
/// no crea una variable nueva
void por_ref(int &k){
      k = 100;
      
      
}

