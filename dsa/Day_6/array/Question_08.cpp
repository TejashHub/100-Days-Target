#include <iostream>
#include <algorithm>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {5, 3, 8, 1, 2};
    int n = 5;

    sort(arr, arr + n);

    cout << "Sorted array in ascending order: " << END;

    for (int i = 0; i < 5; i++){
        cout << arr[i] << END;
    }
}
