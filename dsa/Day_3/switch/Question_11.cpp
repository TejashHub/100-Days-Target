#include <iostream>
using namespace std;

#define END endl << endl

void factorial(int n, int temp){
    for (int i = 1; i <= n; i++) {
        temp *= i;
    }
    cout << "factorial of " << n << " is " << temp << END;
}

int main() {
    int n, temp = 1;

    cout << "Enter n: ";
    cin >> n;

    switch(n){
        default: factorial(n, temp);
    }
    return 0;

}