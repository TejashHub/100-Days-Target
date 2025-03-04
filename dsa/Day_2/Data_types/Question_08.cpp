#include<iostream>
#include <cctype>
using namespace std;

int main(){
    char letter;

    cout << "enter letter: ";
    cin >> letter;

    if(!isalpha(letter)){
        cout << "Only letter is allowed!" << endl;
        cin.clear();
    }
    else
    {
        int asciiValue = letter;

        cout << letter << " : " << asciiValue << endl;
    }

    return 0;
}