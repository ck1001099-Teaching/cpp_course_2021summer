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
	if (n==1){
		return 1;
	}
	return n * factorial(n-1);
}