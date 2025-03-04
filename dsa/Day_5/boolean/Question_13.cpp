#include<iostream>
using namespace std;

int main(){
    string text;
    cout << "enter a string: ";
    cin >> text;

    cout << (text[0] == 'A' || text[0] == 'a') << endl;
}