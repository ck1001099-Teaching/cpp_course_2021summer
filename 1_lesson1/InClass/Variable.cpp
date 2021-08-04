#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a1; // 宣告一個儲存整數數值的變數 a1
    a1 = 3; // = 賦值 ： 把等號右邊的數值存到等號左邊的變數
    cout << a1 << endl;
    a1 = 6;
    cout << a1 << endl;

    // floating number (浮點數)
    // float: 單精度浮點數 (4 bytes)
    // double: 雙精度浮點數 (8 bytes)
    
    // byte   GB, TB, MB, KB
    // 1 個 byte 是 8 個 bits
    // 1 個 bit 就是一個 0 或 1
    float f1;  // 00000000 11100000 10010100 01010001
    double d1; // 00000000 11100000 10010100 01010001 00000000 11100000 10010100 01010001
    f1 = 23.1234567890;
    d1 = 23.1234567890;
    printf("%.12f\n", f1); // 格式化輸出
    printf("%.12f\n", d1); // 格式化輸出
    // cout << f1 << endl;
    // cout << d1 << endl;
    return 0;
}