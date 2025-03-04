#include<iostream>
#include<cctype>
#define END endl << endl

using namespace std;

int main(){

    char ch;

    cout << "enter a character: ";
    cin >> ch;

    switch(isupper(ch)){
        case 1 : cout << "Uppercase" << END; break;
        case 0 : cout << "lowercase" << END; break;
        }

    return 0;
}