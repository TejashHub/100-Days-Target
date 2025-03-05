#include<iostream>
using namespace std;

void show(int &n) { cout << "Non-const Reference: " << n << endl; }
void show(const int &n) { cout << "Const Reference: " << n << endl; }

int main(){
    int x = 10;
    show(x);
    show(20);
    return 0;
}