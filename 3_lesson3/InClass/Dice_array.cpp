#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
	int array[6] = {0, 0, 0, 0, 0, 0};
//	int array1[6] = {0};
//	int array2[6] = {1, 2, 3};
//	int array3[] = {2123, 21, 32, 12};
	
	for (int i = 0 ; i < 100000 ; i++){
		int number = rand() % 6 + 1; // 1~6
		
		array[number-1] = array[number-1] + 1;
//		if (number == 1){
//			a = a + 1;
//		} else if (number == 2){
//			b = b + 1;
//		} else if (number == 3){
//			c = c + 1;
//		} else if (number == 4){
//			d = d + 1;
//		} else if (number == 5){
//			e = e + 1;
//		} else if (number == 6){
//			f = f + 1;
//		}
	}
//	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
	for (int i = 0 ; i < 6; i++){
		cout << array[i];
		if (i != 5){
			cout << " ";
		} else {
			cout << endl; 
		}
	}
	
	return 0;
}
