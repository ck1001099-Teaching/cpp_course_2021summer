#include <iostream>
using namespace std;

int main(){
	int array[8];
	int *ptr;

	for (int i = 0 ; i < 8 ; i++){
		array[i] = i;
	}

	ptr = array;            //ptr = &array[0]
	cout << *ptr << endl;   //array[0]

	ptr = ptr + 4;          //ptr = &array[4]
	cout << *ptr << endl;   //array[4]

	return 0;
}