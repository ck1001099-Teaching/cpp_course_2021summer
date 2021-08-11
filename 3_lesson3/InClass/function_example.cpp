// 標頭檔（標題檔） header
#include <iostream>
using namespace std;

int max(int, int);

int main(int agrc, char** argv){
	// 輸入 2 個數，算出比較大的值

	int a, b;
	cin >> a >> b;

	int c;
	if (a > b){
		c = a;
	} else {
		c = b;
	}
    
    cout << c << endl;

	int d, e;
	cin >> d >> e;
	
	int f;
	if (d > e){
		f = d;
	} else {
		f = e;
	}

    cout << f << endl;

	c = max(a, b); // line 13 ~ 17
	f = max(d, e); // line 23 ~ 27

	int g, h;
	cin >> g >> h;

	int i = max(g, h);
	
    cout << i << endl;

	return 0;
}

int max(int param1, int param2){  // int param1 = g, param2 = h;
	if (param1 > param2){
		return param1;
	} else {
		return param2;
	}
}