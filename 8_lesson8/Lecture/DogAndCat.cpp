#include <iostream>
#include <string>
using namespace std;

class Dog{
public:
	void WangWang(){
		cout << "Wang! Wang!" << endl;
	}
	string GetName() { return name; }
	void SetName(string name) { this->name = name; }
	double GetWeight() { return weight; }
	void SetWeight(double weight) { this->weight = weight; }
	int GetAge() { return age; }
	void SetAge(int age) { this->age = age; }
private:
	string name;
	double weight;
	int age;
};

class Cat{
public:
	void Meow(){
		cout << "Meow~~~" << endl;
	}
	string GetName() { return name; }
	void SetName(string name) { this->name = name; }
	double GetWeight() { return weight; }
	void SetWeight(double weight) { this->weight = weight; }
	int GetAge() { return age; }
	void SetAge(int age) { this->age = age; }
private:
	string name;
	double weight;
	int age;
};

int main(){

	Dog dog;
	dog.SetName("Cool");
	cout << dog.GetName() << endl;
	dog.WangWang();

	Cat cat;
	cat.SetName("Ayn");
	cout << cat.GetName() << endl;
	cat.Meow();

	return 0;
}