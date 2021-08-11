#include <iostream>
using namespace std;

int main(){
	int num1 = 10, num2 = 15;
	int *ptr = &num1;

	cout << "num1=" << num1 << " , num2=" << num2 
		 << " , (*ptr)=" << *ptr << endl;

	*ptr = 30;

	cout << "num1=" << num1 << " , num2=" << num2
		 << " , (*ptr)=" << *ptr << endl;

	ptr = &num2;

	cout << "num1=" << num1 << " , num2=" << num2
		 << " , (*ptr)=" << *ptr << endl;

	return 0;
}