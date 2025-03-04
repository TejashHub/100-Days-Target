#include<iostream>
#define END endl << endl;

using namespace std;

int main(){

    int n;
    cout << "enter value of n: ";
    cin >> n;

    switch(n % 2){
        case 0 : cout << n << " is even number." << END;
        break;
        case 1 : cout << n << " is odd number." << END;
        break;
    }

    return 0;
}