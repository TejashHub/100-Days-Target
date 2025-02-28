#include <iostream>
using namespace std;

void check(int number){
    if(number <= 1){
        cout << number << " is not prime number" << endl; 
    }
    for (int i = 2; i < number; i++)
    {
        if(number % i == 0){
            cout << number << " is not prime number" << endl;
            return;
            break;
        }
        
    }
    cout << number << " is prime number" << endl;
}

int main(){
    int number;

    cout << "number: ";
    cin >> number;

    check(number);
}
