#include<iostream>
#define END endl << endl

using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int count = 0, sum = 0;

    for (int i = 0; i < 6; i++){
        count += 1;
        sum += arr[i];
    }

    int result = sum / count;

    cout << "Average of Array: " << result << END;
}