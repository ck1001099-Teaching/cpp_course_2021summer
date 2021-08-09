#include <iostream>
using namespace std;

void I_AM_A_FUNCTION(int, int);

int main(){
	
	I_AM_A_FUNCTION(1, 2);

	return 0;
}

void I_AM_A_FUNCTION(int a, int b){
	cout << a << " " << b << endl;
	return;
}