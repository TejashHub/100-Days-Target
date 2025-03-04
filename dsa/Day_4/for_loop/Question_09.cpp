#include<iostream>
using namespace std;

int main(){
    int n, a, b, temp = 0;

    cout << "enter a value of n: ";
    cin >> n;

    a = 0;
    b = 1;

    for (int i = 2; i <= n; i++){
        temp = a + b;
        a = b;
        b = temp;
        cout << "Fibonacci series is " << b << endl << endl;
    }
}