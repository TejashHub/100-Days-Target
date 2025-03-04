#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);
    vector<int> arr2(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < n; i++){
        cout << "copy array element index " << i << " is " << arr2[i] << endl;
    }

    return 0;
}