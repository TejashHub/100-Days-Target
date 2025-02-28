#include <iostream>
using namespace std;

void checker(int number){
    if(number % 2 == 0){
        cout << number << " is even number" << endl;
    }else if(number % 2 != 0){
        cout << number << " is old number" << endl;
    }else if(number == 0){
        cout << number << " is zero number" << endl;
    } else{
        cout << "something went wrong" << endl;
    }
}

int main(){
    int number;
    cout << "number: ";
    cin >> number;
    checker(number);
    return 0;
}