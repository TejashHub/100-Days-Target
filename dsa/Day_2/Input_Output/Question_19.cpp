#include<iostream>
using namespace std;

int main(){

    int number;
    int temp = 1;

    cout << "enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++){
        temp *= i;
    }

    cout << "factorial number is: " << temp << endl;

    return 0;
}