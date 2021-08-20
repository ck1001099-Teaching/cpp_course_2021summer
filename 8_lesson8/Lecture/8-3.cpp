#include <iostream>
using namespace std;

class Test{
public:
	Test(){ a = b = 0; }
	Test(int n, int m){ a = n; b = m; }
	Test operator+(Test);
	void display(){ cout << a << " " << b << endl; }
private:
	int a, b;
};

Test Test::operator+(Test obj){
	Test tmp;
	tmp.a = a + obj.a;
	tmp.b = b + obj.b;
	return tmp;
}

int main(){
	Test s1(2, 3), s2(4, 5), s3;
	s3.display();
	s3 = s1 + s2;
	s3.display();
	return 0;
}