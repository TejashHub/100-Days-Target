#include <iostream>
#include <cmath>
#define END endl << endl

using namespace std;

int factorial(int n){
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int main(){
    int n = 5, r = 2;
    double result = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "C(" << n << "," << r << ") = " << result << END;
    return 0;
}   