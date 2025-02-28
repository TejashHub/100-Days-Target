#include<iostream>
using namespace std;

void Fibonnaci(int n){
    int a = 0;
    int b = 1;
    for (int i = 0; i <= n; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;

        cout << "Fibonnaci: " << b << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    Fibonnaci(n);

    return 0;
}