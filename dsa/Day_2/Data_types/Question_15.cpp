#include<iostream>
#include <cctype>

#define END endl << endl

using namespace std;

int main(){
    char letter;

    cout << "enter letter: ";
    cin >> letter;

    if(!isalpha(letter)){
        cout << "letter is required!" << END;
        cin.clear();
    }
    else{
        int asciiValue = letter;
        cout << "Your ASCII value is: " << asciiValue << END;
    }

    return 0;
}