#include<iostream>
using namespace std;

int main(){
    int n, sum = 1;

    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i <= n - 1; i++){
        sum += i;
    }

    cout << "factorial of " << n << " is a " << sum << endl << endl;
    return 0;
}