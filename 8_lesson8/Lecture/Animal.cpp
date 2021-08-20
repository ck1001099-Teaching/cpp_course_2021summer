#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
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

class Dog: public Animal{
public:
	void WangWang(){
		cout << "Wang! Wang!" << endl;
	}
};

class Cat: public Animal{
public:
	void Meow(){
		cout << "Meow~~~" << endl;
	}
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

	Animal* animal = new Cat();
	animal->SetName("1234");
	((Cat*)animal)->Meow();
	
	return 0;
}