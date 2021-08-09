#include <iostream>
using namespace std;

// 題目一
// 寫一個程式，計算1+2+3+…+100的值

int main(){

    int sum = 0;
    for (int i = 0 ; i < 100 ; i++){
        int num = i + 1;
        sum = sum + num;
    }
    cout << "1+2+3+...+100 = " << sum << endl;

}