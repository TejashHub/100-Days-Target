#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num % 7 == 0 && num % 5 != 0) << endl;
}