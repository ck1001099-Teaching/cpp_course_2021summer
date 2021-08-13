#include <iostream>
using namespace std;

// 變數交換程式
// 撰寫一個程式，具有一個自訂函數swap()，可將傳入之兩個變數的值交換。
void swap(int*, int*);

int main(){

    int a = 10, b = 5;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;

    int c = 444, d = 412;
    cout << c << " " << d << endl;
    swap(&c, &d);
    cout << c << " " << d << endl;    

    return 0;
}

void swap(int* ptr1, int* ptr2){
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}