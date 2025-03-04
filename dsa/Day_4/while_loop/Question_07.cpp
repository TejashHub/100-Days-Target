#include<iostream>
using namespace std;

int main(){
    int n, i = 1;

    cout << "enter n: ";
    cin >> n;

    cout << endl;

    while(i <= 10){
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
    cout << endl;
}