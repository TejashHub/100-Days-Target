#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    int digits = to_string(num).length();

    cout << to_string(num);

    while (num > 0) {
        remainder = num % 10;  
        sum += pow(remainder, digits); 
        num /= 10;  
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
