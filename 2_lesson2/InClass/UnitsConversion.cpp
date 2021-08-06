//1公尺=3.28英呎，1公斤=2.2英鎊，請寫出一個可讓使用者自由選擇
//要轉換哪一單位的程式。

#include <iostream>
using namespace std;

int main(){

	int mode;
	cout << "1) 公尺->英呎   2) 公斤->英鎊" << endl;
	cin >> mode;
	
	if (mode == 1){
		cout << "請輸入??公尺" << endl;
		double meter;
		cin >> meter;
		cout << meter * 3.28 << "英呎" << endl;
	} else if (mode == 2){
		cout << "請輸入??公斤" << endl;
		double kilogram;
		cin >> kilogram;
		cout << kilogram * 2.2 << "英鎊" << endl;
	} else {
		cout << "請輸入正確的數字" << endl;
	}
	return 0;
}

