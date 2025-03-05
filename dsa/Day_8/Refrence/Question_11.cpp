#include<iostream>
using namespace std;

int x = 100;

int& getRef(){
    return x;
}

int main(){
    getRef() = 200;
    cout << "Updated x: " << x << endl << endl;
    return 0;
}