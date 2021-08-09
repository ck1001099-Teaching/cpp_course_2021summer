#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int tmp;

	ifstream myFile;
	myFile.open("file.txt", ios::in); // d:\\textIn.txt
	if (!myFile){ // myFile.is_open()
		cout << "開啟檔案失敗" << endl;
		return 0;
	}
	myFile >> tmp;
	cout << tmp << endl;
	myFile.close();
	
	return 0;
}