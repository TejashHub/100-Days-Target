#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n, e = 0, o = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++){
        if(arr1[i] % 2 == 0){
            e++;
        }else{
            o++;
        }
    }

    cout << "total even number is: " << e << endl;
    cout << "total old number is: " << o << endl;

    return 0;
}