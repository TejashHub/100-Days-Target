#include<iostream>
using namespace std;

struct BankAccount{
    char name[20];
    int accountId;
    float balance;
};

int main(){
    BankAccount holder[5] = {
        {"Payal Yadav", 234567890, 5678.90},
        {"Janki Varma", 234567890, 5678.90},
        {"Namisha Mehta", 234567890, 5678.90},
        {"Tejash Panvar", 234567890, 5678.90},
        {"Tarun Sharma", 234567890, 5678.90},
    };

    for (int i = 0; i < 5; i++){
        cout << "Welcome to BOB branch in bhilad" << endl;
        cout << "Customer Name: " << holder[i].name << endl;
        cout << "Customer Account Details: " << holder[i].accountId << endl;
        cout << "Customer Balance: " << holder[i].balance << endl;
        cout << endl;
    }
}