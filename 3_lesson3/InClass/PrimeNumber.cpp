// 列出 1 ~ 100 中的所有質數
#include <iostream>
using namespace std;

int main(){
	
	for (int i = 0 ; i < 100 ; i++){
		int value = i + 1; // 1~100
		//cout << value << endl;
		
		bool isPrimeNumber = true;
		// 檢驗是否存在第三個因數
		for (int factor = 1 ; factor <= value ; factor++){
			if (value % factor == 0){
				if (factor != 1 && factor != value){
					// 不是質數
					isPrimeNumber = false;
					break;
				}
			}
		}
		
		if (isPrimeNumber){
			cout << value << endl;
		}
	}
	
	return 0;
} 
