#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cout << "enter string: ";
    getline(cin, str);

    cout << "string length is: " << str.length() << endl;
    cout << "string size is: " << str.size() << endl;
}