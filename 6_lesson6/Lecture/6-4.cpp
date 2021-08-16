//Textbook: 9-12
#include <iostream>
#include <string>
using namespace std;

void sortArray(string array[]);

int main(){
	string s1[] = {"Java", "Assembly", "Delphi", "Aasic", "Fortran", "Cobol"};
	cout << "排序前：";
	for (int i = 0 ; i < 5 ; i++){
		cout << s1[i] << " ";
	}
	cout << endl;

	sortArray(s1);
	cout << "排序後：";
	for (int i = 0 ; i < 5 ; i++){
		cout << s1[i] << " ";
	}
	cout << endl;

	return 0;
}

void sortArray(string array[]){
	string buffer;
	for (int i = 0 ; i < 4 ; i++){
		for (int j = 0 ; j < 5 ; j++){
			if (array[i] > array[j]){
				buffer = array[i];
				array[i] = array[j];
				array[j] = buffer;
			}
		}
	}
}