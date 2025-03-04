#include<iostream>
#include <cmath>
using namespace std;

#define END endl << endl

int main(){

    string n, temp;

    cout << "enter number: ";
    cin >> n;

    for (int i = n.length() - 1 ; i >= 0; i--){
        temp += n[i];
    }

    if(n == temp){
        cout << "Your number is palindrom" << END;
    }else{
        cout << "Your number is not palindrom" << END;
    }

    return 0;
}