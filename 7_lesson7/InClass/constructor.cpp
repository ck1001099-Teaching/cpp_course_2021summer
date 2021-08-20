#include <iostream>
#include <string>
using namespace std;

class Dog{
public:
	Dog(){

	}
};

class Human{
public:
	Human(string name, string birth, string bloodTypeDad, string bloodTypeMom){
		_name = name;
		_birth = birth;
		if (bloodTypeDad == "O" && bloodTypeMom == "O"){
			_bloodType = "O";
		}
	}
	//void SetName(string newName){ name = newName; }
	string GetName(){ return _name; }
	string GetBirth(){ return _birth; }
	string GetBloodType(){ return _bloodType; }
private:
	string _name;
	string _birth;
	string _bloodType;
};


int main(){

	Human h1("小白", "1996/01/14", "O", "O"),
	      h2("小王", "1996/02/14", "AB", "AB"),
	      h3("小黑", "2000/01/01", h1.GetBloodType(), h2.GetBloodType());
	cout << h1.GetName() << endl;
	cout << h2.GetName() << endl;
	cout << h3.GetName() << endl;


	return 0;
}