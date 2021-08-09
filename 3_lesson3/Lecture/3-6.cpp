#include <iostream>
using namespace std;

int main(){
	int array[10];
	array[0] = 100;
	array[1] = 90;
	array[6] = 12;

	cout << array[0] << " " << array[1] << " " << array[6] << endl;

	cin >> array[3] >> array[4];

	cout << array[3] << " " << array[4] << endl;

	return 0;
}