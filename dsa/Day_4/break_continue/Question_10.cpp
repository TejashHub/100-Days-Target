#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    while(true){
        cout << "Enter a number: ";
        cin >> n;
        cout << endl;
        sum += n;
        if(sum >= 20) break;
    }
    cout << "Sum reached 20. Exiting." << endl << endl;
    return 0;
}