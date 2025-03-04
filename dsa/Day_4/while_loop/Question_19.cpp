#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {  
    int originalNumber = num, reminder, result = 0, n = 0;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        reminder = temp % 10;
        result += pow(reminder, n);
        temp /= 10;
    }

    return (result == originalNumber);  
}

int main() {
    int n, i = 1;  

    cout << "Enter n: ";
    cin >> n;

    cout << "Armstrong numbers between 1 and " << n << " are: " << endl;
    while (i <= n) {
        if (isArmstrong(i)) {  
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    
    return 0;
}
