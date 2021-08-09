#include <iostream>
using namespace std;

int main(){
	int array[10];
	
	for (int i = 0 ; i < 10 ; i++){
		if (i == 0){
			array[i] = 1;
		} else {
			array[i] = array[i-1] * 2;
		}
		// i        0 1 2 3 4  5 6 7 8 9
		// array[i] 1 2 4 8 16 ...     512
	}

	for (int i = 0 ; i < 10 ; i++){
		cout << "element " << i << " : " << array[i] << endl;
	}

	return 0;
}