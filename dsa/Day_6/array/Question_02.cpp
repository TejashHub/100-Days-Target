#include<iostream>
#define END endl << endl;

using namespace std;

int main(){
    int arr[] = {10, 25, 78, 45, 99, 64, 107, 66, 145, 135};
    int max = arr[0];

    for (int i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum Element is: " << max << END;
}