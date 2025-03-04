#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;

    cout << "enter n1: ";
    cin >> n1;

    cout << "enter n2: ";
    cin >> n2;

    cout << "enter n3: ";
    cin >> n3;

    if(n1 > n2 and n1 > n3){
        cout << n1 << " is greater than the " << n2 << " and " << n3 << endl;
    }
    else if(n2 > n1 and n2 > n3){
        cout << n2 << " is greater than the " << n1 << " and " << n2 << endl;
    }
    else if(n3 > n1 and n3 > n2){
        cout << n3 << " is greater than the " << n1 << " and " << n2 << endl;
    }
    else{
        cout << "all value is equal" << endl;
    }

    return 0;
}
