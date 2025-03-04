#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "enter string: ";
    getline(cin, str);

    cout << "Character at index 1: " << str.at(6) << endl;
}