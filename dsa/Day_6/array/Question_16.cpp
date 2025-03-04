#include<iostream>
#define END endl << endl

using namespace std;

void rightLeft(int arr[], int n){
    int first = arr[0];
    for (int i = 0; i < n -1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    rightLeft(arr, n);

    cout << "Array after left rotation: " << END;

}
