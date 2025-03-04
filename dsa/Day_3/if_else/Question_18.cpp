#include<iostream>
#include <cmath>
using namespace std;

#define END endl << endl

int main(){
    int n;

    cout << "enter a number: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int temp = 0;

    for (int i = 0; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        cout << "Armstrong number is: " << b << END;
    }

   

    return 0;
}