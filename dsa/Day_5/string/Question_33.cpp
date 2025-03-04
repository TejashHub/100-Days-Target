#include<iostream>
#include <sstream>
#include<string>

using namespace std;

int main(){

    stringstream ss;
    ss << 42 << 3.1113 << " Hello World";

    int x;
    int y;
    string word;

    ss >> x >> y >> word;

    cout << x << ", " << y << ", " << word << endl;
}