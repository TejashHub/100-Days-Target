#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>  

using namespace std;

int main() {
    string str = "Hello Worlds";

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << "Lowercase: " << str << endl;

    return 0;
}
