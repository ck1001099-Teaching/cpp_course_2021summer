#include <iostream>
using namespace std;

int main(){
	int array[8];
	for (int i = 0 ; i < 8 ; i++){
		cout << "第" << i << "個元素的位址: " << &array[i] << endl;
	}
	return 0;
}