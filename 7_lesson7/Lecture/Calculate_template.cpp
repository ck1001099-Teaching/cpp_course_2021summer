#include <iostream>
#include <string>
using namespace std;

/* implement */



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