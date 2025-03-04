#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;

    for (int i = 0; i < 6; i++){
        if(key == arr[i]){
            cout << "Key value Found: " << key << END;
            break;
        }
    }
}