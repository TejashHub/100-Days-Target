#include<iostream>
using namespace std;

void reverseString(string str){
    for (int i = str.length() - 1 ; i >= 0 ; i--){
        cout << str[i];
    }
}

int main()
{
    string str;

    cout << "enter string: ";
    cin >> str;

    reverseString(str);

    return 0;
}