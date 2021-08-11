//輸入兩個數字，求最大公因數，與最小公倍數
#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	// 1,2,3..., min(a,b)
	int min;
	if (a>b){
		min = b;
	} else {
		min = a;
	}

	int max;
	for (int i = 1 ; i <= min ; i++){
		if ( (a%i == 0) && (b%i == 0) ){
			max = i;
			cout << i << endl;
		}
	}
	cout << max << endl;

	return 0;
}