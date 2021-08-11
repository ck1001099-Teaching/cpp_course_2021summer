#include <iostream>
#include <time.h>
using namespace std;

int main(){
	cout << "Program start!" << endl;
	time_t t1 = time(NULL);
	cout << t1 << endl;
	while (time(NULL) - t1 < 10){
		//cout << time(NULL) << endl;
	}
	cout << "Program end!" << endl;
	cout << time(NULL) << endl;
	return 0;
}
