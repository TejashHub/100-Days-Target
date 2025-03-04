#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string text;

    cout << "enter string: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++){
        if(isdigit(text[i])){
            cout << text[i] << " is digit available";
            break;
        }
    }
}