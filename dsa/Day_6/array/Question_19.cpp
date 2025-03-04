#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << "total sum of array: " << sum << endl;

    return 0;
}