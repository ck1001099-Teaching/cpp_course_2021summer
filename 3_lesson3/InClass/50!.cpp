//計算50!的大小
#include <iostream>
using namespace std;

void OutputNumber(int[200]);
void BigMul(int[200], int[200]);

int main(){
	int number[200];
	for (int i = 0 ; i < 200 ; i++){
		number[i] = 0;
	}
	number[199] = 1;

	for (int i = 1 ; i <= 50 ; i++){
		int tmp[200];
		for (int j = 0 ; j < 200 ; j++){
			tmp[j] = 0;
		}
		tmp[198] = i / 10;
		tmp[199] = i % 10;
		//OutputNumber(tmp);
		BigMul(number, tmp);
		//OutputNumber(number);
	}

	OutputNumber(number);
}

void BigMul(int number[200], int tmp[200]){
	int tmp2[200];
	for (int i = 0 ; i < 200 ; i++){
		tmp2[i] = 0;
	}
	// tmp[199] * number
	// tmp[198] * number
	for (int i = 199 ; i > 197 ; i--){
		// i : 199, 198
		// 乘數：tmp[i]
		for (int j = 0 ; j < 200 ; j++){
			//   00000000010  number
			//  x         11  tmp
			//  -------------------
			//   00000000010  tmp2
			//  00000000010
			if (j-(199-i) < 0){
				continue;
			}
			tmp2[j-(199-i)] = tmp2[j-(199-i)] + tmp[i] * number[j];
		}
	}

	//進位
	for (int i = 199 ; i >= 0 ; i--){
		if (i > 0){
			tmp2[i-1] = tmp2[i-1] + tmp2[i]/10;
		}
		tmp2[i] = tmp2[i] % 10;
	}

	for (int i = 0 ; i < 200 ; i++){
		number[i] = tmp2[i];
	}
}

void OutputNumber(int number[200]){
	bool isZero = true;
	for (int i = 0 ; i < 200 ; i++){
		if (number[i] != 0){
			isZero = false;
		}
		if (!isZero){
			cout << number[i];
		}
	}
	if (isZero){
		cout << 0;
	}
	cout << endl;
}