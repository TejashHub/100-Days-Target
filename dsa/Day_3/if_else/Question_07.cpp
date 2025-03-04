#include<iostream>
using namespace std;

#define END endl << endl

int main(){
    int num;

    cout << "enter number: ";
    cin >> num;

    if(num < 1){
        cout << num <<  " is not prime number" << END;
        return 0;
    }else{
        for (int i = 2; i <= num - 1; i ++){
            if(num % i == 0){
                cout << num << " is not prime number" << END;
                return 0;
            }
        }
    }
    cout << num << " is prime number" << END;
    return 0;
}