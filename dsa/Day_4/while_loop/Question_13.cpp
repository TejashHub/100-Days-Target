#include<iostream>
using namespace std;

int main(){
    int i = 0, n, a = 0, b = 1, temp;

    cout << "enter n: ";
    cin >> n;

    while(i <= n){
        temp = a + b;
        a = b;
        b = temp;
        cout << "Fibonacci series is " << b << endl;
        i++;
    }
}