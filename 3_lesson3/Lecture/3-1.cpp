#include <iostream>
using namespace std;

int max();
int a, b;
int main(){
	cin >> a >> b;
	int c = max();
	//cout << "2.... " << a << " " << b << endl;
	cout << c << endl;
	return 0;
}

int max(){
	a = a - 20;
	//cout << "1....  " << a << " " << b << endl;
	return a>b ? a : b;
}