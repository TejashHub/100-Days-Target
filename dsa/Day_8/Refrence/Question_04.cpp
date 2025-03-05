#include<iostream>
using namespace std;

int swapVariable(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main(){
    int x = 10, y = 80;
    swap(x, y);
    cout << "After Swap: X = " << x << ", y = " << y << endl;
}