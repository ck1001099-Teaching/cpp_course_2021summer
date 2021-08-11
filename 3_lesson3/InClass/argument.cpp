#include <iostream>
using namespace std;

// argc: argument count
// argv: argument value  2維字元陣列

// ./argument
// 1331
// f,al
// 12412

int main(int argc, char** argv){
    cout << "輸入的參數個數: " << argc << endl;

    for (int i = 0 ; i < argc ; i++){
        cout << argv[i] << endl;
    }

    cout << argv[0][1] << endl;
    return 0;
}