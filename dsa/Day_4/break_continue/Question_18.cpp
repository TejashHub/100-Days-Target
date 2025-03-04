#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 7, 8};
    for (int n : arr){
        if(n % 2 != 0){
            cout << "First odd number: " << n << endl << endl;
            break;
        }
    }
    return 0;
}