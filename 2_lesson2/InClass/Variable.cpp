#include <iostream>
#include <string>
using namespace std;

int main(){
    // 整數
    int a1;
    a1 = 3; // = 指定運算子：把等號右邊的數值，存入等號左邊的變數（儲存空間）裡
    int a2 = 5;
    // 變數 -> 可以改變的數值（不限於只有數字，字元、字串、布林值、物件也是可以儲存的資料）
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;

    a1 = a1 + a2; // a1 = 3 + 5  -->  a1 = 8
    cout << "a1 = " << a1 << endl;

    // 一次宣告多個變數
    int a3, a4 = 10, a5;

    int a6 = 10, a7 = 3;
    cout << "a6 對 a7 取餘數 = " << a6 % a7 << endl; // 10 / 3 = 3 ... 1

    long int l1; // 4 bytes = int
    long long int l2; // 8 bytes -2^63 ~ 2^63-1

    // +,-,*,/ 的運算，如果是 int +-*/ int ---> int
    cout << "a6 對 a7 取商 = " << a6 / a7 << endl; // 10/3 = 3.3333 取整 3

    cout << "a6 除以 a7 = " << (double)a6 / a7 << endl; // 強制轉型
    //  (double)10 / 3  --->  10.0 / 3  ---> 3.333

    double d2 = 3.14;
    double d3 = 10;
    cout << (int)d3 / (int)d2 << endl;


    // 浮點數
    float f1 = 21.1234567890;
    double d1 = 21.1234567890;

    // 字元
    char c1 = 'd';
    cout << c1 << endl;  // d
    char c2 = 67;
    cout << c2 << endl;  // C
    
    cout << (int)c1 << endl;

    // 字串 （一串字元）
    // C: 字元陣列 (array) char char char char
    // C++: 幫我們定義了一個新的資料型態（類別 class）， string
    string s1 = "Haha";
    cout << s1 << endl;
    string s2 = ", cool!";
    cout << s2 << endl;

    cout << s1 + s2 << endl; // 把兩個字串做串接

    string s3 = s1 + s2;
    cout << s3 << endl;

    // 布林值：用來做邏輯判斷的一種資料
    bool b1 = false;
    bool b2 = true;
    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;

    // 常數
    string s4 = "1234";

    const string url = "https://www.google.com" + s4;
    cout << url + "/drive" << endl;
    cout << url + "/email" << endl;

    return 0;
}