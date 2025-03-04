#include<iostream>
#define END endl << endl

using namespace std;

void Fibonacci(int a, int b, int n, int temp){
    for (int i = 2; i <= n; i++){
        temp = a + b;
        a = b;
        b = temp;
        cout << "Fibonacci : " << b << END;
    }
}

int main(){
    int n;

    cout << "enter value: ";
    cin >> n;

    int a = 0, b = 1;
    int temp;

    switch(n){
        default : Fibonacci(a, b, n, temp);
    }
}