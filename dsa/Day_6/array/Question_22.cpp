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
    for (int i = n - 1; i >= 0; i--){
        cout << "Reverse array element is: " << arr[i] << endl;
    }

    return 0;
}