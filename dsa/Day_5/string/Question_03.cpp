#include<iostream>
using namespace std;

int main(){
    string str;

    cout << "enter a string: ";
    cin >> str;

    cout << "Front character is: " << str.front() << endl;
    cout << "Back character is: " << str.back() << endl;
}