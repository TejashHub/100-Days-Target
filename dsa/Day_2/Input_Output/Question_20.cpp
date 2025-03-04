#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not prime." << endl;
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {  
            cout << num << " is not prime." << endl;
            return 0;  
        }
    }

    cout << num << " is prime." << endl;

    return 0;
}
