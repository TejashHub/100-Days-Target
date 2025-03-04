#include<iostream>
#include <vector>
using namespace std;

void insertSorted(vector<int>& arr, int n){
    for (int i = 1; i < n; i++){
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    cout << "Insert Sorting: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}