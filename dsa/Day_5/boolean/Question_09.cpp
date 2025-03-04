#include<iostream>
using namespace std;

int main(){
    string password;

    cout << "enter a password: ";
    cin >> password;

    cout << (password.length() >= 8 && (password.find('@') != string::npos || password.find('#') != string::npos)) << endl;

}