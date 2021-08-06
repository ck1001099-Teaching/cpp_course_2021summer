#include <iostream>
using namespace std;

int main(){
	int a, b;
	char ch;
	cin >> a >> ch >> b;
	switch (ch){
		case '+':
			cout << a+b << endl;
			break;
		case '-':
			cout << a-b << endl;
			break;
		case '*':
			cout << a*b << endl;
			break;
		case '/':
			cout << a/b << endl;
			break;
		default:
			cout << "invalid operator" << endl;
			break;
	}
	return 0;
}