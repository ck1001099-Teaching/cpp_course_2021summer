#include <iostream>
using namespace std;

void ModifyArray(int array[], int index, int value){
    array[index] = value;
}

void OutputArray(int array[], int count){
    for (int i = 0 ; i < count ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void Test(int array[10][]){

}

int main(){

    int array[10];
    for (int i = 0 ; i < 10 ; i++){
        array[i] = i;
    }
    OutputArray(array, 10);
    ModifyArray(array, 5, 100);
    OutputArray(array, 10);
    
    int array2[10][20];
    Test(array2);

    return 0;
}