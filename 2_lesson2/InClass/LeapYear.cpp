//公元年分除以4不可整除，為平年。
//公元年分除以4可整除但除以100不可整除，為閏年。
//公元年分除以100可整除但除以400不可整除，為平年。
//公元年分除以400可整除但除以3200不可整除，為閏年

#include <iostream>
using namespace std;

int main(){

	int year;
	cin >> year;

	cout << ( ((year%4 == 0) && (year%100 != 0)) || 
	((year%400 == 0) && (year%3200 != 0)) ) << endl;

}
