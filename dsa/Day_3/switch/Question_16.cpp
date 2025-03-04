#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    int choice;
    double amount;

    do{
        cout << "\n===== ATM Menu =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice){

            case 1: 
                cout << "Enter Your Amount: ";
                cin >> amount;
                if(amount > 0){
                    balance += amount;
                    cout << "Deposit successful! New balance: ₹" << balance << endl;
                }else{
                    cout << "Please add Sufficient Amount: ₹" << amount << endl;
                }
                break;
            case 2: 
                cout << "Enter Your Amount: ";
                cin >> amount;
                if(amount > 0){
                    balance -= amount;
                    cout << "Withdraw successful! New balance: ₹" << balance << endl;
                }else{
                    cout << "Please add Sufficient Amount: ₹" << amount << endl;
                }
                break;
            case 3: 
                cout << "Check Balance: ";
                cout << "Your Current Balance is: " << balance;
                break;
            case 4: break;
        }

    }while(choice != 4);

    return 0;
}
