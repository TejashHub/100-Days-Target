#include<iostream>
using namespace std;

int main(){
    int n, d, rev = 0, temp;

    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while (temp > 0){
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }

    if(n == rev){
        cout << n << " Palindrome" << endl << endl;
    }else{
        cout << n << " Not Palindrome" << endl << endl;
    }

    return 0;
}