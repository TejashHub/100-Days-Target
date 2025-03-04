#include <iostream>
using namespace std;

enum Status
{
    SUCCESS, FAILURE
};

Status checkNumber(int n){
    return (n % 2 == 0) ? SUCCESS : FAILURE;
} 

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Status result = checkNumber(n);

    if(result == SUCCESS){
        cout << "The number is even." << endl;
    }else{
        cout << "The number is odd." << endl;
    }
}