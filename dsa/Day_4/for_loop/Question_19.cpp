#include <iostream>
using namespace std;

int main(){

    int num, digit, smallest = 9, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    for (; temp > 0; temp /= 10) { 
        digit = temp % 10; 
        if (digit > largest) {
            largest = digit;
        }
        if (digit < smallest) {
            smallest = digit;
        }
    }

    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;

    return 0;
}