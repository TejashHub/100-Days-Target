#include <iostream>
using namespace std;

int main(){
    int num, i;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = num > 1;

    for (int i = 2; i <= num; i++){
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    cout << isPrime << endl;

    return 0;
}