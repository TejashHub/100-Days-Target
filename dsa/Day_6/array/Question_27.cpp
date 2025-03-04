#include<iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[j] > arr[ j + 1 ]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}   

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    bubbleSort(arr1, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++){
        cout << arr1[i] << endl;
    }

    return 0;
}