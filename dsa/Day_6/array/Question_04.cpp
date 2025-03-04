#include<iostream>
#define END endl << endl;

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Reverse Array: ";

    for (int i = n; i >= 0; i--){
        cout << arr[i] << END;
    }
}