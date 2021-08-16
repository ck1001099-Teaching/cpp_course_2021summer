//Textbook: 9-10
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1("Hello"), s2(" world"), s3;
	s3 = s1 + s2;
	string s4(s3 + "!");
	s1 += "!";

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;

	return 0;
}