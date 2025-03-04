#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

bool isNumeric(const string &str){
    return !str.empty() && all_of(str.begin(), str.end(), ::isdigit);
}

int main(){
    string str = "12345";
    cout << "Is Numeric: " << (isNumeric(str) ? "Yes it is digit." : "Yes it is not digit.") << endl << endl;
}