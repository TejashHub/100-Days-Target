#include<iostream>
using namespace std;

int main(){
    int n;
    while (true){
        cout << "Enter a number (0 to exit): ";
        cin >> n;
        if(n == 0) break;
    }
    return 0;
}