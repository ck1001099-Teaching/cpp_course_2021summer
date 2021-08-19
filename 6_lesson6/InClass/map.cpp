#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

    map<string, string> dict;
    dict["world"] = "the earth, together with all of its countries and peoples.";
    dict["hello"] = "used as a greeting or to begin a phone conversation.";

    cout << dict["world"] << endl;

    map<int, string> dict2;
    dict2[2] = "two";
    dict2[10] = "ten";

    cout << dict2[10] << endl;
    

    return 0;
}