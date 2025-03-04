#include<iostream>
using namespace std;

#define END endl << endl

int main(){

    int num;

    cout << "enter number: ";

    cin >> num;

    if(num % 5 == 0 && num % 11 == 0){
        cout << num << " is divided by 5 and 11" << END;
    }else{
        cout << num << " is not divided by 5 and 11" << END;
    }

    return 0;
}