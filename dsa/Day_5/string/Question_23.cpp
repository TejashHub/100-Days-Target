#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string str = "wow";
    string newStr = str;
    reverse(str.begin(), str.end());

    if(str == newStr){
        cout << "string are palindrom" << endl;
    }else{
        cout << "string are not palindrom" << endl;
    }
}