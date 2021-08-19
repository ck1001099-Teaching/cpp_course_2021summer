#include <iostream>
#include <string>
using namespace std;

class Human{
public:
    string GetName(){
        return name;
    }
    void SetName(string newName){
        name = newName;
    }
private:
    string name;
};

int main(){

    Human h1, h2;  // h1, h2: 變數 (物件)
    h1.SetName("小明");
    h2.SetName("小王");

    cout << h1.GetName() << " " << h2.GetName() << endl;

    return 0;
}