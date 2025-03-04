#include<iostream>
using namespace std;

#define END endl << endl;

int main(){
    int num = 40;

    int *ptr;

    ptr = &num;

    cout << "Value: " << *ptr << " address: " << ptr << END;
}