#include <iostream>
using namespace std;

int main(){
	int array[3][4] = { {2, 3, 5, 2},
	 					{1, 2, 7, 9},
	 					{0, -1, -5, 12}};
	for (int i = 0 ; i < 3 ; i++){
		for (int j = 0 ; j < 4 ; j++){
			cout << i << " " << j << " " << array[i][j] << endl;
		}
		cout << endl;
	}
	return 0;
}