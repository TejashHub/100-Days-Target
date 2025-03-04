#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    int num;
    cout << "enter a number: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Even" : "Odd") << END;

    return 0;
}