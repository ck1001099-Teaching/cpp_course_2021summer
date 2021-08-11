#include <iostream>
using namespace std;

int main(){

    char str[10] = "Hello\0";
    // str[0] = 'H'
    // str[1] = 'e'
    // str[2] = 'l'
    cout << str << endl;

    int arr[10] = {0};
    cout << arr << endl; // 陣列第 0 個元素的記憶體位址

    return 0;
}