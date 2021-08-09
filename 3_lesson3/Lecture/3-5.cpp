#include <iostream>
using namespace std;

int factorial(int);

int main(){
	int n;
	cout << "Input n:" << endl;
	cin >> n;
	cout << "n! = " << factorial(n) << endl;
	return 0;
}

int factorial(int n){
	int fac = 1;
	for (int i = 0 ; i < n ; i++){
		fac = fac * (i+1);
	}
	return fac;
}