#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

// C: stdlib -> standard library
// random seed : 亂數種子 -> 表從哪裡開查


int main(){
    srand(time(NULL));
    for (int i = 0 ; i < 10 ; i++){
        int num = rand() % 100 + 1; // 1 ~ 100
        cout << num << endl;
    }

    return 0;
}