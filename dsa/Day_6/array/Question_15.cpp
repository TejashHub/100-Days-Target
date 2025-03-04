#include<iostream>
#define END endl << endl

using namespace std;

void rotateRight(int arr[], int n){
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last;

}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    rotateRight(arr, n);

    cout << "Array after rotation: " << END;

    for (int i = 0; i < n; i++){
        cout << arr[i] << " " << END;
    }

    return 0;
}
