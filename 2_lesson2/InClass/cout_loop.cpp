#include <iostream>
using namespace std;

int main(){

    int num;
    cin >> num;

    for (int i = 0 ; i < num ; i++){  // i: 計數器
        for (int j = 0 ; j < 50 ; j++){
            cout << ".";
        }
        cout << endl;
        if (i % 2 == 0){
            cout << "Hello, world!" << endl;
        }
    }

    // i++ <--> i = i + 1
    // i-- <--> i = i - 1

    for (int i = 1 ; i <= 100 ; i++){
        cout << "Hi!" << endl;
    }

    for (int i = 0 ; i < 100 ; i++){
        cout << "Hi!" << endl;
    }

    // 無限迴圈
    // for ( ; ; ){
    //     cout << "Cool!" << endl;
    // }

    // case 1: i 的生命週期會屬於 main() (外面那層函數的)
    int i;
    for (i = 0 ; i < 10 ; i++){
        cout << "Hello!" << endl;
    }
    // case 2: i 的生命週期會屬於 for()
    for (int i = 0 ; i < 10 ; i++){ // 變數遮蔽
        int var = 10;

        cout << "Hello!" << endl;
        cout << i << endl;
    }
    
    return 0;
}