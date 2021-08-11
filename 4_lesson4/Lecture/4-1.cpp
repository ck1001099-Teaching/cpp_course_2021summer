#include <iostream>
using namespace std;

int main(){
	cout << endl;
	cout << "Declare an integer variable" << endl;

	int number = 10;
	cout << "  number (value): " << number << endl;
	cout << "  number (address): " << &number << endl;

	cout << endl;
	cout << "Declare a pointer of integer variable" << endl;

	int* ptr;
	cout << "  ptr (initial value): " << ptr << endl;
	cout << "  ptr (address): " << &ptr << endl;
	//cout << "  ptr (point to): " << *ptr << endl;  // Error!!

	cout << endl;
	cout << "Assign the address of \"number\" to \"ptr\"" << endl;

	ptr = &number;
	cout << "  ptr (value): " << ptr << endl;
	cout << "  ptr (address): " << &ptr << endl;
	cout << "  ptr (point to): " << *ptr << endl;

	cout << endl;
	return 0;
}