#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 7, 2, 8, 4, 9, 5, 6, 8, 9, -5};
    bool allPositive = true;
    for (int num : arr) {
        if(num < 0){
            allPositive = false;
            break;
        }
    }
    cout << allPositive << endl;
    return 0;
}