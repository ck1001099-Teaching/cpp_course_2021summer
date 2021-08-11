// 計算方程式
// 撰寫一個程式，接受使用者輸入一元n次方程式的係數，使用陣列儲存，
// 然後接受使用者輸入的變數值，計算方程式的值。
#include <iostream>
#include <math.h> // pow
using namespace std;

int main(){
	int n;
	cout << "請輸入一元n次方程式的次數: ";
	cin >> n;

	// 9 x^2 + 6 x + 1
	// i     0 1 2
	// index 2 1 0
	// x^n   2 1 0
	// coff  9 6 1

	double coefficient[n+1];
	cout << "請輸入一元" << n << "次方程式的係數: " << endl;
	for (int i = 0 ; i < n+1 ; i++){
		cin >> coefficient[n-i];
	}

	double x;
	cout << "請輸入 x: ";
	cin >> x;
	double sum = 0.0;
	for (int i = 0 ; i < n+1 ; i++){
		sum = sum + coefficient[i] * pow(x, i);
	}
	cout << "代入 x 得 " << sum << endl;

	return 0;
}