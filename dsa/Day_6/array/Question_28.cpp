#include<iostream>
#include <vector>
using namespace std;

void bubbleShort(vector<int>& arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    
}

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubbleShort(arr, n);

    cout << "Sorted Array is: ";
    for (int i = 0; i < n; i++){
        cout << "index value is: " << arr[i] << endl;
    }
}