#include<iostream>
#include<string>
using namespace std;

#define END endl << endl

int main(){
    string str;

    int temp = 0;

    cout << "enter your string: ";
    getline(cin, str);

    for (int i = 1; i <= str.length(); i ++){
        temp += 1;
    }

    cout << "total character of string is " << temp << END;

    return 0;
}