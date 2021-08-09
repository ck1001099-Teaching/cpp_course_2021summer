#include <iostream>
using namespace std;

int main(){

    // bool flag = false;
    // for (int j = 0 ; j < 5 ; j++){
    //     for (int i = 0 ; i < 10 ; i++){
    //         cout << i << endl;
    //         if (i == 5) {
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if (flag){
    //         break;
    //     }
    // }

    // cout << "迴圈執行完畢" << endl;

    for (int i = 0 ; i < 10 ; i++){
        if (i % 3 == 0){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}