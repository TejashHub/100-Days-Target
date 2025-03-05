#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int &num : vec)
        num *= 2; 
    for (const int &num : vec)
        cout << num << " ";
    return 0;
}