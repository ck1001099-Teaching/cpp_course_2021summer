#include <iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    cout << "是不是 2,3,5 的倍數：" << ((num % 2 == 0) && (num % 3 == 0) && (num % 5 == 0)) << endl;

    return 0;
}