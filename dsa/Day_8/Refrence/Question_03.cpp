#include<iostream>
using namespace std;

int& getRef(int &a){
    return a;
}

int main(){
    int x = 19;
    getRef(x) = 102;
    cout << "x: " << x << endl;
    return 0;
}
