#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    char ch;

    cout << "enter vowel ";

    cin >> ch;

    string vowels = "aioue";

    for (int i = 0; i <= vowels.length(); i++){
        if( ch == vowels[i]){
            cout << ch << " is a vowel" << END;
            break;
        }else{
            cout << ch << " is not a vowel" << END;
            break;
        }
    }
    return 0;
}