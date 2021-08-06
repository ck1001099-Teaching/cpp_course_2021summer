#include <iostream>
using namespace std;

int main(){

	for (int i = 0 ; i < 1000 ; i = i + 1){ // 計數器
		cout << "Hello, world!" << endl;
	}

	// i++ <--> i = i + 1
	for (int j = 0 ; j < 10 ; j++){
		cout << j << endl;
		j = j + 1;
	}

	return 0;
}