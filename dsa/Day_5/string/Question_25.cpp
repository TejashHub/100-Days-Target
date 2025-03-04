#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "banana";
    char ch = 'n';

    int countVal = count(str.begin(), str.end(), ch);

    cout << "Character " << ch << " appears " << countVal << " times" << endl;

}