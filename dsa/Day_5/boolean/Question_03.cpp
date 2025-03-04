#include<iostream>
using namespace std;

int main(){
    
    int year;

    cout << "enter year: ";
    cin >> year;

    cout << ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) << endl;

}