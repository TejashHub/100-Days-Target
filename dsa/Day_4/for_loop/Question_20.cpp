#include <iostream>
using namespace std;


int main(){
    int num1, num2, gcd = 1;


    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int minNum = (num1 < num2) ? num1 : num2; 

    for (int i = 1; i <= minNum; i++) {
        if (num1 % i == 0 && num2 % i == 0) { 
            gcd = i; 
        }
    }

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}