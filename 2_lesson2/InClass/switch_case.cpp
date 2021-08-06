#include <iostream>
using namespace std;

int main(){

    int money;
    cin >> money;

    cout << "可以買 ";
    switch (money){
        case 1000000:
            cout << "車子 ";
        case 100000:
            cout << "電腦 ";
        case 10000:
            cout << "switch ";
        case 1000:
            cout << "化妝品";
    }
    cout << endl;
    
    return 0;
}