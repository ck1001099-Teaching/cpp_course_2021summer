#include <iostream>
using namespace std;

int f(int);

int x;

int main(){
	x = 10;
	int y;
	y = f(x);
	cout << "x = " << x << ", y = " << y << endl;
	return 0;
}

int f(int x2){
	x = x2 + 2;
	return x * x;
}