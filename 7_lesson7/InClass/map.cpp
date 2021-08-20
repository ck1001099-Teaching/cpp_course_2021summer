#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

	map<int, double> m1;

	cout << m1.size() << endl;

	// insert key-value pair
	m1[30] = 3.14;      //  30  -> 3.14
	m1[100] = 213.231;  //  100 -> 213.231

	m1[-100] = 321.1;

	cout << m1.size() << endl;
	cout << m1[30] << " " << m1[100] << " " << m1[-100] << endl;


	map<string, string> url;

	url["Wiki"] = "https://www.wikipedia.org/";
	url["Google"] = "https://google.com";
	url["NTU"] = "https://www.ntu.edu.tw";

	cout << "維基百科網址：" << url["Wiki"] << endl;
	cout << "Google 網址：" << url["Google"] << endl;
	cout << "台大網址：" << url["NTU"] << endl;


	//     姓名     一個人的各科成績
	map<string, map<string, int> > scores;
	//                 科目   成績


	return 0;
}