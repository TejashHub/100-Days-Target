#include<iostream>
using namespace std;

void mergeSortedArray(int arr1[], int n, int arr2[], int m, int result[]){
    int i = 0, j = 0, k = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
        }else{
            result[k++] = arr1[j++];
        }
    }
    while(i < n){
        result[k++] = arr1[i++];
    }
    while(j < m){
        result[k++] = arr2[j++];
    }
}

int main(){
    int n, m;

    cout << "Enter size of first sorted array: ";
    cin >> n;
    int arr1[n];

    cout << "Enter first sorted array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> m;
    int arr2[m];

    cout << "Enter second sorted array elements: ";
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    int result[n + m];
    mergeSortedArray(arr1, n, arr2, m, result);

    for (int i = 0; i < n + m; i++){
        cout << result[i] << " ";
    }
    
    return 0;
}