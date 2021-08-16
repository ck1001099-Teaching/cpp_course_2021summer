//Textbook: 9-11
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1, s2;
	cout << "請輸入 s1 字串: ";
	getline(cin, s1);
	cout << "請輸入 s2 字串: ";
	getline(cin, s2);
	
	if (s1 == s2){
		cout << "s1 == s2" << endl;
	} else {
		cout << "s1 != s2" << endl;
	}

	return 0;
}