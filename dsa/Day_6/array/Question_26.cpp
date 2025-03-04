#include<iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cout << "Enter key: ";
    cin >> key;

    for (int i = 0; i < n; i++){
        if(arr1[i] == key){
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}