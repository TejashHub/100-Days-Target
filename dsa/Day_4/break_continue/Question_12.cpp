#include <iostream>
using namespace std;

int main(){
    int n;
    for (int i = 1; i < 10; i++){
        cout << "Enter a number: ";
        cin >> n;
        if (n < 0) break;
        cout << "You entered: " << n << endl;
    }
    return 0;
}