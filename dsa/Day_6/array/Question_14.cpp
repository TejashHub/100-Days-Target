#include <iostream>
#include <algorithm>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {10, 20, 40, 30, 50};
    int n = 5;

    sort(arr, arr + n);

    cout << "Second smallest element: " << arr[1] << END;

    return 0;
}
