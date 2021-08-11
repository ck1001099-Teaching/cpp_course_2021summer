// 學生成績系統
// 撰寫一個程式，接受10個學生的成績，儲存在陣列中，之後計算10個學生的平均成績。
#include <iostream>
using namespace std;

int main(){

	double scores[10];
	for (int i = 0 ; i < 10 ; i++){
		cin >> scores[i];
	}

	double sum = 0;
	for (int i = 0 ; i < 10 ; i++){
		sum = sum + scores[i];
	}
	double average = sum / 10;
	cout << "總成績: " << sum << endl;
	cout << "平均成績: " << average << endl;

	return 0;
}