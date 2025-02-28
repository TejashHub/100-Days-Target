#include <iostream>
using namespace std;

long long temp = 1;

void factorial(int n){
    for (int i = 1; i <= n; i ++){
        temp *= i;
    }
    cout << "factorial " << temp << endl;
}

int main(){
    int n;
    
    cout << "n: ";
    cin >> n;

    factorial(n);
    return 0;
}