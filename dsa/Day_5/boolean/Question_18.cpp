#include<iostream>
using namespace std;

int main(){
    string text;
    cout << "enter a string ";
    cin >> text;

    cout << ((text == string(text.rbegin(), text.rend())) ? "Palindrome" : "Palindrome Not") << endl << endl;  

    return 0;
}