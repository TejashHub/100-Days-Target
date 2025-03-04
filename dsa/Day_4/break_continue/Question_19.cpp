#include <iostream>
using namespace std;

int main(){
    int arr[] = {30, 60, 20, 90, 40};
    for (int n : arr){
        if(n >= 50){
            continue;
        }
        cout << n << endl;
    }
    return 0;
}