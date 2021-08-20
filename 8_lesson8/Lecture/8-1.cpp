#include <iostream>
using namespace std;

class Test{
public:
	Test(int k){ this->k = k; }
	void Add1(){ number = number + 1; }
	int Get(){ return number+k; }
private:
	static int number;
	int k;
};

int Test::number = 0;

int main(){
	Test a(10);
	Test b(20);

	cout << "number(a): " << a.Get() << ", number(b): " << b.Get() << endl;
	a.Add1();
	cout << "number(a): " << a.Get() << ", number(b): " << b.Get() << endl;
	b.Add1();
	cout << "number(a): " << a.Get() << ", number(b): " << b.Get() << endl;
	return 0;
}