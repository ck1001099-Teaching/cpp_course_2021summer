#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int tmp, tmp2;
	int arr[2];

	ifstream myFile;
	myFile.open("file.txt", ios::in);
	if (!myFile){ // myFile.is_open()
		cout << "開啟檔案失敗" << endl;
		return 0;
	}

	myFile >> tmp >> tmp2;
	cout << tmp << endl;
	cout << tmp2 << endl;
	myFile.close();

	ofstream ofs;
	ofs.open("output.txt", ios::out);
	if (!ofs.is_open()){
		cout << "開啟檔案失敗" << endl;
		return 0;
	}
	ofs << tmp + tmp2 << endl;
	ofs.close();
	
	return 0;
}