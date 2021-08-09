#include <iostream>
using namespace std;

// 題目一 - 延伸
// 寫一個程式，計算1+2+3+…+N的值

// sum = N(N+1)/2

// 時間複雜度：要算多久，程式才會算完。  ---->  決定了一個程式的好壞

int main(){
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0 ; i < N ; i++){  // N 次運算   -->  O(n)  (唸法： big O n)
        int num = i + 1;
        sum = sum + num;
    }
    
    cout << "1+2+3+...+" << N << " = " << sum << endl;

    sum = N * (N+1) / 2;  // 3 次運算    -->  O(1)  (唸法： big O one)

    cout << "1+2+3+...+" << N << " = " << sum << endl;
}