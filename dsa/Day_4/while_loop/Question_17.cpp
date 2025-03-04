#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    while(true){
        cout << "enter value of n: ";
        cin >> n;
        if(n == 0) break;
        sum += n;
    }
    cout << "total sum: " << sum << endl;
    
}