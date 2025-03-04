#include <iostream>
using namespace std;

#define END endl << endl

int main(){
    char ch = 'b';
    char upper = ch & '_';
    cout << "Uppercase: " << upper << END;
}