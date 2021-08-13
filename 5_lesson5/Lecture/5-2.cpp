#include <iostream>
using namespace std;

int main(){
	//num, ptr將一直存在直到該函數結束。
	int num = 100;
	int *ptr = &num;

	//ptr2, ptr3 所指向的int位址是動態配置記憶體得到的
	//可透過delete釋放記憶體
	int *ptr2, *ptr3;
	ptr2 = new int;
	*ptr2 = 200;
	ptr3 = new int(300);

	//釋放記憶體
	delete ptr2;
	delete ptr3;

	return 0;
}