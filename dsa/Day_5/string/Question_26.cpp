#include<iostream>
#include<string>

using namespace std;

int main(){
    string str = "banana";

    cout << "First occurrence: " << str.find("an") << endl;
    cout << "Second occurrence: " << str.rfind("an") << endl;

    return 0;
}