#include<iostream>
#include<algorithm>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    sort(arr, arr + n, greater<int>());

    cout << "Sorted array (Descending): ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << END;
    }
}