#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl << endl;
    }
    return 0;
}