#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, originalNum, remainder, numDigits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    originalNum = n;

    while(n != 0){
        n = n / 10;
        numDigits++;
    }

    n = originalNum;

    while (n != 0) {
        remainder = n % 10;  
        sum += pow(remainder, numDigits);  
        n /= 10;  
    }

    if (sum == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }


    return 0;
}