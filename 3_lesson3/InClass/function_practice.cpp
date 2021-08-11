#include <iostream>
using namespace std;

// 1. 請寫一個函數，用以計算整數的非負整數次方。
// 輸入：int a, int n
// 輸出：a^n
int pow(int, int);

// 2. 請寫一個函數，找出四個整數中的最大值。
// 輸入：int a, int b, int c, int d
// 輸出：max(a,b,c,d)
int max(int, int, int, int);

// 3. 請寫一個函數，在螢幕上輸出10行「Hello, world!」。
// 輸入：無
// 輸出：無
void HelloWorld(); // void: 空 --> 不需要回傳值

int main(){

    int a, n;
    cin >> a >> n;
    cout << pow(a, n) << endl;

    cout << max(3, 6, 0, 2) << endl;

    HelloWorld();
    
    return 0;
}

int pow(int a, int n){ // Time comlexity: O(n)
    int res = 1;
    for (int i = 0 ; i < n ; i++){
        res = res * a;
    }
    return res;
    // ex: 3^5
    // - solution 1: O(n)
    // 1 * 3 * 3 * 3 * 3 * 3
    // - solution 2: O(log(n))
    // 1
    // 1 * 3  = 3^1
    // 3^1 * 3^1 = 3^2
    // 3^2 * 3^2 = 3^4
    // 3^4 * 3^1 = 3^5 
}

int max(int a, int b, int c, int d){
    int res = a;
    if (res < b){
        res = b;
    }
    if (res < c){
        res = c;
    }
    if (res < d){
        res = d;
    }

    // res = a;
    // res = res > b ? res : b;
    // res = res > c ? res : c;
    // res = res > d ? res : d;

    // 補充：計算絕對值
    // int a, b;
    // int abs = a > b ? (a-b) : (b-a);

    return res;
}

void HelloWorld(){
    for (int i = 0 ; i < 10 ; i++){
        cout << "Hello, world!" << endl;
    }
    return;
}