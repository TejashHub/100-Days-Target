#include<iostream>
#include<cctype>
using namespace std;

#define END endl << endl

int main(){
    char ch;

    cout << "enter character: ";
    cin >> ch;

    if(isupper(ch)){
        cout << "your character is belong to uppercase" << END;
    }else if(islower(ch)){
        cout << "your character is belong to lowercase" << END;
    }
}