#include<iostream>
using namespace std;

int main(){

    int n = 50;

    if(n <= 1){
        cout << "this is not prime number" << endl;
        return 0;
    }

    for (int i = 2; i < n; i++){
        if(n % i == 0){
            cout << n << " is not prime number" << endl;
            return 0;
            break;
        }
    }

    cout << n << " is prime number" << endl;

    return 0;
}