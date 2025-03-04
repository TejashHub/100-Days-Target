#include<iostream>
#include <climits>  
using namespace std;

int main(){
    int maxInt = INT_MAX;
    cout << "Max int: " << maxInt << endl;
    maxInt += 1;
    cout << "After Overflow: " << maxInt << endl;
    return 0;
}