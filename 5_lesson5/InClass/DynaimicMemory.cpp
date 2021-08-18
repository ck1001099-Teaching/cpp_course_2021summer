#include <iostream>
using namespace std;

// 寫一個C++程式，練習動態記憶體配置與釋放。
// 宣告3個int指標，並動態配置記憶體，初始值分別為400, 200, 100。
// 印出3個int指標指向的記憶體位址與值。
// 宣告2個float指標，並動態配置記憶體，初始值分別為3.14, 6.28。
// 印出2個float指標指向的記憶體位址與值。
// 釋放3個int指標。
// 重新配置動態記憶體給3個int指標，初始值分別為10, 50, 100。
// 印出3個int指標指向的記憶體位址與值。
// 釋放2個float指標。
// 釋放3個int指標。

int main(){

    int *ptr1, *ptr2, *ptr3;
    ptr1 = new int(400);
    ptr2 = new int(200);
    ptr3 = new int(100);
    cout << ptr1 << " " << ptr2 << " " << ptr3 << endl;
    cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << endl;

    float *f1, *f2;
    f1 = new float(3.14);
    f2 = new float(6.28);
    cout << f1 << " " << f2 << endl;
    cout << *f1 << " " << *f2 << endl;

    float *f3 = f2;
    f2 = new float;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete f1;
    delete f2;
    delete f3;

    int* arr = new int[12];
    arr[0] = 12;
    arr[11] = 24;
    delete[] arr;

    int** arr = new int*[3];
    arr[0] = new int[10];
    arr[1] = new int[4];
    arr[2] = new int[15];

    0 1 2 3 4 5 6 7 8 9
    0 1 2 3
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

    // delete[] arr[0];
    // delete[] arr[1];
    // delete[] arr[2];
    for (int i = 0 ; i < 3 ; i++){
        delete[] arr[i];
    }
    delete[] arr;
    
    int arr2[4][5];
    0 1 2 3 4
    0 1 2 3 4
    0 1 2 3 4
    0 1 2 3 4

    segmentation fault
    int array[5];
    array[6] = 10;

    int* ptr = new int;
    delete ptr;
    delete ptr;

    return 0;
}