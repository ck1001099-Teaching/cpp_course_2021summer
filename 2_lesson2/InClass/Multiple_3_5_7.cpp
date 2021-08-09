#include <iostream>
using namespace std;

// 題目二
// 寫一個程式，列出1到1000間，3、5、7的倍數。

int main(){
    cout << "1到1000間，3、5、7的倍數有 ";
    for (int i = 0 ; i < 1000 ; i++){
        int num = i+1;
        if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}