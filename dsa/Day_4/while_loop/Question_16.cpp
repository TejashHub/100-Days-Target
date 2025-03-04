#include<iostream>
using namespace std;

int main(){
    int n, digit, small = 9, large = 0;

    cout << "enter value ";
    cin >> n;

    if(n == 0) {
        cout << "Smallest: 0\nLargest: 0";
        return 0;
    }

    if(n < 0) {
        n = -n;
    }

    while(n > 0){
        digit = n % 10;
        if(digit > large) large = digit;
        if(digit < small) small = digit;
        n /= 10;
    }

    cout << "Smallest: " << small << "\nLargest: " << large << endl << endl;
    return 0;
}