#include <iostream>
using namespace std;

int main(){
	char inkey;
	cout << "Please input Y then push enter..." << endl;
	cin >> inkey;
	if (inkey == 'y' || inkey == 'Y'){
		cout << "So Good!!" << endl;
	}
	return 0;
}