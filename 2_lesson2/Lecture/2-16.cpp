#include <iostream>
using namespace std;

int main(){
	
	for (int i = 10 ; i <= 100 ; i++){
		if ((i%7 == 0)){
			break;
		}
		cout << i << endl;
	}
	
	return 0;
}