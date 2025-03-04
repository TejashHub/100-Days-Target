#include<iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "enter n1: ";
    cin >> n1;

    cout << "enter n2: ";
    cin >> n2;

    if(n1 > n2){
        cout << n1 << " is greater than " << n2 << endl;
    }else{
        cout << n2 << " is greater than " << n1 << endl;
    }
}