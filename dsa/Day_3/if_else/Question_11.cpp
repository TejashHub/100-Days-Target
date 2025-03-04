#include<iostream>
#include<cctype>
using namespace std;

#define END endl << endl

int main(){
    int a, b, c;

    cout << "enter tree angle: ";
    cin >> a >> b >> c;

    int result = a + b + c;

    if(result == 180){
        cout << result << " is belong to triangle." << END;
    }else{
        cout << result << " is not belong to triangle." << END;   
    }
}