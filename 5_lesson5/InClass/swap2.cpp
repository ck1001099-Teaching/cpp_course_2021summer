#include <iostream>
using namespace std;

void swap(void*, void*, int);

int main(){

    int a = 3, b = 4;
    cout << a << " " << b << endl;
    swap(&a, &b, sizeof(int)); // &a --> int*
    cout << a << " " << b << endl;

    double c = 3.14, d = 6.28;
    cout << c << " " << d << endl;
    swap(&c, &d, sizeof(double));
    cout << c << " " << d << endl;

    char e = 'A', f = 'D';
    cout << e << " " << f << endl;
    swap(&e, &f, sizeof(char));
    cout << e << " " << f << endl;

    bool g = true, h = false;
    cout << g << " " << h << endl;
    swap(&g, &h, sizeof(bool));
    cout << g << " " << h << endl;

    return 0;
}

void swap(void* ptr1, void* ptr2, int length){
    char* p1 = (char*)ptr1;
    char* p2 = (char*)ptr2;

    for (int i = 0 ; i < length ; i++){
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;

        p1 = p1 + 1;
        p2 = p2 + 1;
    }
}