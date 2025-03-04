#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    char ch;
    cout << "enter vowels: ";

    cin >> ch;

    switch (ch){
        case 'a' : case 'i' : case 'u' : case 'o' : case 'e' :
            cout << "your character is vowel" << END;
            break;
        default:
            cout << "Consonant" << END;
        }
}