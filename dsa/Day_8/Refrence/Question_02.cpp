#include<iostream>

using namespace std;

void increment(int &n){
    n++;
}

int main(){
    int n = 5;
    increment(n);
    cout << "After increment: " << n << endl;
    
    return 0;
}