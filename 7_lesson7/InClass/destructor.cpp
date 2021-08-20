#include <iostream>
using namespace std;

class Example{
public:
	Example(int i){
		index = i;
		cout << "Create: " << index << endl;
		ptr = new int;
	}
	~Example(){
		cout << "Release: " << index << endl;
		delete ptr;
	}
private:
	int index;
	int *ptr;
};

int main(){

	int a = 3;

	Example e1(1);

	if (a > 0){
		Example e2(2);
		Example e3(3);
	}

	return 0;
}