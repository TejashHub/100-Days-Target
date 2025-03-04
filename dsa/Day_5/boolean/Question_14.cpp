#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string text;
    bool isAlpha = true;

    cout << "enter a string: ";
    cin >> text;

    for(char c: text){
        if(!isalpha(c)){
            isAlpha = false;
            break;
        }
    }

    cout << isAlpha << endl;

    return 0;
}