#include<iostream>
#include<cctype>
using namespace std;

#define END endl << endl

int main(){

    char ch;

    cout << "enter character ";

    cin >> ch;

    if(isalpha(ch)){
        cout << "yout character is alphabet " << ch << END;
    }else if(isdigit(ch)){
        cout << "yout character is digit " << ch << END;
    }else if(isupper(ch)){
        cout << "yout character is uppercase " << ch << END;
    }else if(islower(ch)){
        cout << "yout character is lowercase " << ch << END;
    }else if(ispunct(ch)){
        cout << "yout character is punctuation " << ch << END;
    }else{
        cout << "special character " << ch << END;
    }

    return 0;
}