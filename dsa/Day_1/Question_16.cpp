#include <iostream>
using namespace std;

void tableCount(int n)
{
    for (int i = 1; i <= 10 ; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int main(){
    int n;
    cout << "table number: ";
    cin >> n;
    tableCount(n);
}