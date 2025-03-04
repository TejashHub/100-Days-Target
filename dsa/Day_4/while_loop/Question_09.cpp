#include<iostream>
using namespace std;

int main(){
    int i = 1, sum = 0;
    string n;

    cout << "enter number: ";
    cin >> n;

    while(i <= n.length()){
        sum += 1;
        i++;
    }

    cout << "total digit of number: " << sum << endl;
}