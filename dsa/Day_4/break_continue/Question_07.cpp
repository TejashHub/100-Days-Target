#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){
            if(j == 2) break;
            cout << i << "," << j << " " << endl;
        }
    }
    return 0;
}
