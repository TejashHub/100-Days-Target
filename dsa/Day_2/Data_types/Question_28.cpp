#include<iostream>
#include<string>
using namespace std;

#define END endl << endl;

int main(){

    string str;

    cout << "enter your string: ";
    getline(cin, str);

    cout << "Your string length is: " << str.length() <<  END ;
}