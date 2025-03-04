#include <iostream>
using namespace std;

int main(){
    int n;
    while(true){
        cout << "enter a number: ";
        cin >> n;
        if(n < 0) break;
    }
    cout << "Negative number encountered. Exiting.";
    return 0;
}