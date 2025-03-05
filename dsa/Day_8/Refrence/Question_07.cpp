#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int* &ref = ptr;
    *ref = 50;
    cout << "a: " << a << endl;
}
