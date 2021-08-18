#include <iostream>
using namespace std;

int main(){
    int n, m;
    
    while (cin >> n >> m){ // while (cin >> ...)   --->  程式會執行到輸入為 EOF (end of file) 的時候

        int food[n+1];  // 0 ~ n
        for (int i = 1 ; i <= n ; i++){
            cin >> food[i];
        }

        for (int i = 0 ; i < m ; i++){
            int l, r;
            cin >> l >> r;
            int sum = 0;
            for (int foodIndex = l ; foodIndex <= r ; foodIndex++){
                sum = sum + food[foodIndex];
            }
            cout << sum << endl;
        }

    }

    return 0;
}