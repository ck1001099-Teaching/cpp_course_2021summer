#include <iostream>
#include <string>
using namespace std;

// - 定義一個運算(Calculate)類別，其資料成員與成員函數如下：
//   - 定義private資料成員x，用來存放運算值。
//   - 定義建立者(constructor)函數，並設定x的初值為0。
//   - 定義public成員函數add、sub、mul與div，處理加、減、乘、除四則計算。
//   - 定義public成員函數result，輸出x。
/* implement */
class Calculate{
public:
	Calculate(){ x = 0; }
	void add(double v1, double v2){ x = v1 + v2; }
	void sub(double v1, double v2){ x = v1 - v2; }
	void mul(double v1, double v2){ x = v1 * v2; }
	void div(double v1, double v2){ x = v1 / v2; }
	double result(){ return x; }
private:
	double x;
};


int main(){
	Calculate calculate;
	
	double value1, value2;
	string op;

	while(true){
		cin >> value1 >> op >> value2;
		if (op == "+"){
			calculate.add(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "-"){
			calculate.sub(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "*"){
			calculate.mul(value1, value2);
			cout << calculate.result() << endl;
		} else if (op == "/"){
			calculate.div(value1, value2);
			cout << calculate.result() << endl;
		} else {
			cout << "Wrong Operation Type";
		}
	}

	return 0;
}