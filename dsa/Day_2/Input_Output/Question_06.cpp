#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a integer: ";

    if(!(cin >> num)){
        cout << "please add integer only!! " << endl;
        cin.clear();
    }
    else{
        cout << "your number is: " << num << endl;
    }
    return 0;
}