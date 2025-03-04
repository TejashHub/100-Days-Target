#include<iostream>
using namespace std;

#define END endl << endl

bool isPowerOf2(int n){
    return (n && !(n & (n - 1)));
}

int main(){

    int num = 8;

    cout << "Is power of 2? " << (isPowerOf2(num) ? "Yes" : "No")  << END;

    return 0;
}