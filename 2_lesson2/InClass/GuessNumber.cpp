#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()
using namespace std;

// 題目三
// 寫一個程式，設計一個終極密碼的遊戲。
// 1. 輸入通關密碼，數字必須在1~100之間。
// 2. 輸入數字後按下Enter鍵。
// 3. 若猜錯，就顯示縮小後的數字範圍，並依提示再次猜謎。
// 4. 若猜對，則顯示評語。

int main(){

    int lowerBound = 1;
    int upperBound = 100;

    // 使用亂數來生成密碼
    srand(time(NULL));
    int answer = rand() % 100 + 1;

    int guessNumber;

    // solution 1
    // while (true){
    //     if (guessNumber == answer){
    //         break;
    //     }
    // }
    
    // solution 2
    bool isGameOver = false;
    while (!isGameOver){
        cout << "請猜一個數字（" << lowerBound << " ~ " << upperBound << "）：";
        cin >> guessNumber;

        if (!(guessNumber >= lowerBound && guessNumber <= upperBound)){
            cout << "不理你了喔~ 請猜在正確範圍內！" << endl;
            continue;
        }

        if (guessNumber == answer){
            cout << "恭喜你！你猜對了！" << endl;
            isGameOver = true;
            continue;
        } else {
            cout << "喔喔~ 你猜錯了！";
            if (guessNumber < answer){  // ex: 50  < 68  --> 51 ~ 100
                lowerBound = guessNumber + 1;
                cout << "猜得太低了~" << endl; 
            } else if (guessNumber > answer){ // ex: 78   --> 1 ~ 77
                upperBound = guessNumber - 1;
                cout << "猜得太高了" << endl;
            }
        }
    }
    
    return 0;
}