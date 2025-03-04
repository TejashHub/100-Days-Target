#include<iostream>
#include<algorithm>
#define END endl << endl

using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];

    for (int i = 0; i < 5; i++){
        arr2[i] = arr1[i];
    }

    cout << "Copied array: " << END;

    for (int i = 0; i < 5; i++){
        cout << "New array value: " << arr2[i] << END;
    }
}