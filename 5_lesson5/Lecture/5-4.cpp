#include <iostream>
using namespace std;

int main(){

	int p1[10];
	int *p1_ptr = new int[10];

	int p2[10][20];
	int **p2_ptr = new int*[10];
	for (int i = 0 ; i < 10 ; i++){
		p2_ptr[i] = new int[20];
	}

	for (int i = 0 ; i < 10 ; i++){
		for (int j = 0 ; j < 20 ; j++){
			p2_ptr[i][j] = i*20+j;
			cout << "Value: " << p2_ptr[i][j] << endl;
		}
	}

	for (int i = 0 ; i < 10 ; i++){
		delete[] p2_ptr[i];
	}
	delete[] p2_ptr;

	return 0;
}