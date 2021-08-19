#include <iostream>
#include <string>
using namespace std;

int main(){

    string s1;
    s1 = "Hello!";

    cout << "s1 的長度 = " << s1.size() << endl;

    s1 = "Cool";
    cout << "s1 的長度 = " << s1.size() << endl;

    string s2 = "Happy Hello World!";
    cout << "s2 的長度 = " << s2.size() << endl;

    return 0;
}