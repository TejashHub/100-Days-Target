#include<iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr, int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex  = i;
        for (int j = i + 1; i < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter Array of elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}