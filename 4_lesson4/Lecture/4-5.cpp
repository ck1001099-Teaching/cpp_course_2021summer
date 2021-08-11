#include <iostream>
using namespace std;

int main(){
	int *pp, *p, x=5;
	pp = &p;
	p = &x;
	cout << x << endl;
	**p = 10;
	cout << x << endl;
}