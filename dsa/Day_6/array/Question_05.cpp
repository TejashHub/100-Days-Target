#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int count = 0;

    for (int i = 0; i < 6; i++){
        count += arr[i];
    }

    cout << "Total Sum of Array: " << count << END;
}