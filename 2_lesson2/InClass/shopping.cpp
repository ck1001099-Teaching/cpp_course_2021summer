#include <iostream>
using namespace std;

// 百貨公司週年慶打折程式
// 豪慷慨百貨公司週年慶，公司決定在公司消費超過2000元的顧客就打7折，
// 來增加買氣，請幫該公司寫出一個收銀台程式，輸入顧客購買總金額後，計算顧客實際需付的錢。

int main(){
    cout << "請輸入顧客購買總金額: ";
    int money;
    cin >> money;

    cout << "顧客實際上需要付: ";
    if (money > 2000){
        cout << (int)(money * 0.7) << "(7折)" << endl;
        cout << money * 7 / 10 << "(7折)" << endl;
    } else {
        cout << money << endl;
    }

    return 0;
}