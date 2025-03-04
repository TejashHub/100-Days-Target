#include<iostream>
using namespace std;

int main(){
    int i = 2, n;
    cout << "enter n: ";
    cin >> n;
    if(n <= 1){
        cout << n << " is not a prime number" << endl << endl;
        return 0;
    }
    while(i <= n - 1){
        if(n % i == 0){
            cout << n << " is not a prime number" << endl << endl;
            return 0;
            break;
        }
        i++;
    }
    cout << n << " is a prime number" << endl << endl;
}