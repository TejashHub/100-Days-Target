#include<iostream>
using namespace std;

enum Gender
{
    MALE = 'm',
    FEMALE = 'f'
};

int main(){
    Gender m = MALE;
    cout << "Gender: " << char(m) << endl;
    return 0;
}

