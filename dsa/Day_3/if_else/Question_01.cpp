#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    int num;

    cout << "enter a number: ";

    cin >> num;

    if(num > 0){
        cout << "your number is positive numbers " << END;
    }else if(num == 0){
        cout << "number is zero" << END;
    }else{
        cout << "your number is negative numbers " << END;
    }
}