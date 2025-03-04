#include<iostream>
using namespace std;

int main(){
    int n, i = 1, count = 1;

    cout << "enter n: ";

    cin >> n;

    while (i <= n){
        count *= i;
        i++;
    }
    cout << "Factorial of " << count << endl << endl;
}