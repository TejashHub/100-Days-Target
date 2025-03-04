#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[6];

    for (int i = 0; i < 3; i++){
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < 3; i++){
        arr3[i + 3] = arr2[i];
    }

    cout << "Merged array: " << END;
    for (int i = 0; i < 6; i++){
        cout << "Array value is: " << arr3[i] << END;
    }
}