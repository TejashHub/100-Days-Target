#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter value of n: ";
    cin >> n;

    if(n <= 1){
        cout << "Your " << n << " is not prime number." << endl;
        return 0;
    }

    for (int i = 2; i < n - 1; i++){
        if(n % i == 0){
            cout << "Your " << n << " is not prime number." << endl;
            return 0;
            break;
        }
    }
    cout << "Your " << n << " is prime number." << endl;
    return 0;
}