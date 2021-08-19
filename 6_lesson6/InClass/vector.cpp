#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v1;
    vector<double> v2;

    // v1.push_back(12); v1: 12
    // v1.push_back(42); v1: 12 42
    // v1.push_back(2);  v1: 12 42 2

    int array[10];

    for (int i = 0 ; i < 10 ; i++){
        array[i] = i;
        v1.push_back(i);
    }
    // v1: 0 1 2 3 4 5 6 7 8 9

    cout << v1.size() << endl;
    cout << v1[4] << " " << v1[1] << endl;

    v1.clear();

    cout << v1.size() << endl;

    vector<vector<int>> v2;
    
    return 0;
}