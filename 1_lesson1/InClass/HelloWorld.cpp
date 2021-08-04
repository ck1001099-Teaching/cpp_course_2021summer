#include <iostream>  // # 前置處理 ;  iostream: input/output stream (輸入/輸出 串流)
// std::cout, std::endl
#include <string>
using namespace std; // 使用命名空間「std」（standard 標準）
// C++ 裡面定義的標準函式庫都在命名空間「std」下面

// C++ 是強型別語言
int main(){ //主程式  ;  int: integer(整數)
    cout << "Hello, " << endl << "world!" << endl; // endl: 換行符號

    cout << "Haha\tYa\"~\'~";
    cout << 1234 << endl;
    // 雙引號 -> 字串：一串文字
    // 單引號 -> 字元：一個文字
    return 0;
}