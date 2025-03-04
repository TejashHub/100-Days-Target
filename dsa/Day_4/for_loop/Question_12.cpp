#include<iostream>
using namespace std;

int main(){
    int n, count = 0;

    cout << "enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++){
        count += n;
    }

    cout << "total: " << count << endl;

    return 0;
}