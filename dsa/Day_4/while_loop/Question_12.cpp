#include<iostream>
using namespace std;

int main(){

    int a, b, temp;

    cout << "enter a and b: ";
    cin >> a >> b;

    while(b > 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD is: " << a << endl;

    return 0;
}