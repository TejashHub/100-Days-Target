#include<iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n, largest, smallest, secondLargest, secondSmallest;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    largest = secondLargest = INT_MIN;
    smallest = secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++){
        if(arr1[i] > largest){
            secondLargest = largest;
            largest = arr1[i];
        }else if(arr1[i] > secondLargest && arr1[i] != largest){
            secondLargest = arr1[i];
        }
        if(arr1[i] < smallest){
            secondSmallest = smallest;
            smallest = arr1[i];
        }else if(arr1[i] < secondSmallest && arr1[i] != smallest){
            secondSmallest = arr1[i];
        }
    }

    if(secondLargest == INT_MIN){
        cout << "No second largest element found!" << endl;
    }else{
        cout << "Second Largest: " << secondLargest << endl;
    }

    if(secondSmallest == INT_MIN){
        cout << "No second smallest element found!" << endl;
    }else{
        cout << "Second Smallest: " << secondSmallest << endl;
    }

    return 0;
}