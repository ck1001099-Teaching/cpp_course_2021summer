#include <iostream>
using namespace std;

int main(){
	
	int total = 0;

	for (int i = 0 ; i <= 10 ; i++){
		cout << i << endl;
		if (i%2 == 0){
			continue;
		}
		cout << i << endl;
		total = total + i;
	}

	cout << total << endl;
	
	return 0;
}