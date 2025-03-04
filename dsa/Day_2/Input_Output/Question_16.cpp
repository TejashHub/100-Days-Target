#include<iostream>
using namespace std;

int main(){
    string numbers;
    int temp = 0; 

    cout << "Enter number: ";
    cin >> numbers;

    for (int i = 0; i < numbers.length(); i++){
        temp += 1;
    }

    cout << "Total sum of digits is: " << temp << endl;
}
