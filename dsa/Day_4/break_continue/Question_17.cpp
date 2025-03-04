#include <iostream>
using namespace std;

int main() {
    string str = "c++ is a one of the good programming language";
    string vowels = "aioue";

    for (int i = 0; i < str.length(); i++) {
        bool isVowel = false;  
        
        for (int j = 0; j < vowels.length(); j++) {
            if (str[i] == vowels[j]) {
                isVowel = true;  
                break;
            }
        }

        if (!isVowel) {
            cout << str[i] ;
            cout << endl;
        }
    }

    return 0;
}
