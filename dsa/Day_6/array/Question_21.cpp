#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "minimum value of array: " << min << endl;

    return 0;
}