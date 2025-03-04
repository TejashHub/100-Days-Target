#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n, max = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "maximum value of array: " << max << endl;

    return 0;
}