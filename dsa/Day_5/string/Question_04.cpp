#include<iostream>
using namespace std;

int main(){
    string str1, str2;

    cout << "enter string 1: ";
    cin >> str1;

    cout << "enter string 2: ";
    cin >> str2;

    cout << str1.append(str2) << endl;
}