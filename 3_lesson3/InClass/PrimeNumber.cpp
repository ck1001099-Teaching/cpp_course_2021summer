// �C�X 1 ~ 100 �����Ҧ����
#include <iostream>
using namespace std;

int main(){
	
	for (int i = 0 ; i < 100 ; i++){
		int value = i + 1; // 1~100
		//cout << value << endl;
		
		bool isPrimeNumber = true;
		// ����O�_�s�b�ĤT�Ӧ]��
		for (int factor = 1 ; factor <= value ; factor++){
			if (value % factor == 0){
				if (factor != 1 && factor != value){
					// ���O���
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
