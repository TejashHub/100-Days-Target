#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Array Elements" << END;

    for (int i = 0; i < 5; i++){
        cout << "Array value is: " << arr[i] << END;
    }
}
