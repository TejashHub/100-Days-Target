#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 5, 6, 7, 8, 9, 2, 5, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < length; i++){
        if (arr[i] == 5) break;
        cout << arr[i] << "  " << endl;
    }

    return 0;
}