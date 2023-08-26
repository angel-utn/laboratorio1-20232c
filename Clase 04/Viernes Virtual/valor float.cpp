#include <iostream>
using namespace std;

int main() {
	float numero = 1.1f;
   /// 1.100000001f
   /// 1.100000001f
   
   if(numero == 1.1f){
      cout << "Es 1.1"<<endl;
   }
   else{
      cout << "No es 1.1"<<endl;
   }
   
   
	return 0;
}

