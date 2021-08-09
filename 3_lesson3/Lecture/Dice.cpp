//以亂數擲10000次骰子，並分別列出出現1、2、3、4、5、6點的
//次數。
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <time.h>
using namespace std;

int main(){

	srand(time(NULL));

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	for (int i = 0 ; i < 10000 ; i++){
		int number = rand() % 6 + 1; // 1~6
		if (number == 1){
			a = a + 1;
		} else if (number == 2){
			b = b + 1;
		} else if (number == 3){
			c = c + 1;
		} else if (number == 4){
			d = d + 1;
		} else if (number == 5){
			e = e + 1;
		} else if (number == 6){
			f = f + 1;
		}
	}
	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
	return 0;
}