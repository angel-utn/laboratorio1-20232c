#include <iostream>

using namespace std;

int main()
{
	int i;  //scope o ámbito o alcance , la variable i va a "vivir" en todo main

	//for(i=1; i<=20; i+=2)
	for(i=1; i<=20; i=i+2){
      cout << i << endl;
	}

	cout << endl;

	for(i=19; i>=1; i=i-2){
		cout << i << endl;
	}


	return 0;
}
