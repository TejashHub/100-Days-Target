#include <iostream>
using namespace std;

void natural(int n){
    if(n > 0){
        cout << n << " is natural number" << endl;
    }
    else if(n < 0){
        cout << n << " is not natural number" << endl;
    }else{
        cout << n << " is zero number" << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    natural(n);
}