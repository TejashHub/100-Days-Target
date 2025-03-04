#include<iostream>
using namespace std;

int main(){
    int num = 5;
    float result = static_cast<float>(num);
    cout << "Converted integer " << num << " to float: " << result << endl;
    return 0;
}