#include <iostream>

using namespace std;

int main()
{
	float miVariableFloat = 1.1f;

	if(miVariableFloat == 1.1f){
		cout << "miVariableFloat vale 1.1" << endl;
	}
	else{
		cout << "miVariableFloat NO tiene 1.1, tiene: " << miVariableFloat << endl;
	}
	//1.10000001  double
	//1.1000      float

	return 0;
}
