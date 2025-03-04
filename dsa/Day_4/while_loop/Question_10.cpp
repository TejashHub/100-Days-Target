#include<iostream>
using namespace std;

int main(){
    int n, rev = 0, d;

    cout << "Enter value of n: ";
    cin >> n;

    int original = n;

    while(n > 0){
        d = n % 10;
        rev = (rev * 10) + d;
        n = n / 10; 
    }

    cout << "Reversed Number: " << rev << endl;
    return 0;
}
