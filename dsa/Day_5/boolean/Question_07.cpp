#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "enter a number: ";
    cin >> n;

    cout << (n % 3 == 0 || n % 5 == 0) << endl;
}