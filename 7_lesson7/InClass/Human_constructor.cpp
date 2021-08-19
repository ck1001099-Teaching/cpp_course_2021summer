#include <iostream>
#include <string>
using namespace std;

class Human{
public:
    Human();
    Human(string);
    ~Human();
    string GetName();
    void SetName(string);
private:
    string name;
    //Human* this = 指向自己的指標;
};

int main(){

    Human h1("小明"), h2("小王");

    cout << h1.GetName() << " " << h2.GetName() << endl;

    Human h3("小華");

    Human h4;
    cout << h4.GetName() << endl;
    h4.SetName("小白");
    cout << h4.GetName() << endl;

    Human* ptr = &h4;
    cout << (*ptr).GetName() << endl;
    cout << ptr->GetName() << endl;

    return 0;
}

Human::Human(){
    name = "無名氏";
}

Human::Human(string newName){
    SetName(newName);
}

Human::~Human(){
    cout << GetName() << "走了~" << endl;
}

string Human::GetName(){
    return name;
}

void Human::SetName(string name){
    this->name = name;
}