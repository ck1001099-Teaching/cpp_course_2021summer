#include <iostream>
using namespace std;

// 請寫一個程式，輸入一個人的身高及體重，輸出該人的 BMI。
// BMI = 體重(kg) / 身高(m)^2

int main(){
    
    cout << "這是一個 BMI 的計算機" << endl;
    
    cout << "請輸入您的身高(m): ";
    double height;
    cin >> height;

    cout << "請輸入您的體重(kg): ";
    double weight;
    cin >> weight;

    cout << "您的 BMI 指數是 " << weight / (height * height) << endl;

    return 0;
}