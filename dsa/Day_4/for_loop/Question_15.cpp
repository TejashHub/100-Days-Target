#include<iostream>
using namespace std;

int main(){
    string str;
    string temp;

    cout << "enter string or number: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--){
        temp += str[i];
    }

    if(str == temp){
        cout << str << " is palindrom" << endl << endl;
    }else{
        cout << str << " is not palindrom" << endl << endl;
    }

    return 0;

}