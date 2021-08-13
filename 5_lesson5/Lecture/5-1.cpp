#include <iostream>
using namespace std;

int main(){
	
	int *ptr
	ptr = new int;
	*ptr = 20;
	delete ptr;
	ptr = new int(30);
	delete ptr;

	ptr = new int(100);
	ptr = new int(80);
	delete ptr;

	return 0;
}