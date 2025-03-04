#include <iostream>
#include <set>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    set<int> newArr(arr, arr + 7);

    cout << "Array without duplicates: " << END;

    for(int n: newArr){
        cout << n << END;
    }
}