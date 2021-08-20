#include <iostream>
#include <vector>
using namespace std;

int main(){
	// vector 是一個 class
	// 杯子<水> 一號杯子, 二號杯子;
	vector<int> v1;
	
	cout << v1.size() << endl;

	v1.push_back(100);
	v1.push_back(400);

	cout << v1.size() << endl;
	cout << v1[0] << " " << v1[1] << endl;
	cout << v1.at(0) << " " << v1.at(1) << endl;

	cout << "For loop" << endl;
	for (int i = 0 ; i < v1.size() ; i++){
		cout << v1[i] << " ";
	}

	cout << endl;

	for (int i = 0 ; i < 10 ; i++){
		v1.push_back(i * 100); // 0, 100, 200, 300, ..., 900
	}
	cout << v1.size() << endl; // 12 = 2 + 10

	//[100, 400, 0, 100, 200, 300, 400, ..., 900]  => 12 elements
	cout << "Original: ";
	for (int i = 0 ; i < v1.size() ; i++){
		cout << v1[i] << " ";
	}
	cout << endl;
	v1.erase(v1.begin() + 3);


	//[100, 400, 0, 200, 300, 400, ..., 900]  => 11 elements
	cout << "After: ";
	for (int i = 0 ; i < v1.size() ; i++){
		cout << v1[i] << " ";
	}
	cout << endl;

	v1.clear();
	cout << v1.size() << endl;


	vector< vector<int> > v2;
	v2.push_back(v1);

	for (int i = 0 ; i < 10 ; i++){
		vector<int> tmp;
		v2.push_back(tmp);
	}

	return 0;
}