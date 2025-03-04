#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str;

    cout << "enter your string ";
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "uppercase: " << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "lowercase: " << str << endl;
}