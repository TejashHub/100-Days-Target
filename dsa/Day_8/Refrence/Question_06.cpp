#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1, 2, 3};
    int &ref = arr[1];
    ref = 30;
    for (int i = 0; i < 3; i++){
        cout << arr[i] << endl;
    }
}