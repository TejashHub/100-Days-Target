#include<iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << ((ch == 'a' || ch == 'e' || ch =='u' || ch == 'o' || ch == 'i')) << endl;

    return 0;
}