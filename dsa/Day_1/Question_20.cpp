#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string newStr;

    cout << "Your String: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        newStr.append(1, str[i]); 
    }

    if(str == newStr){
        cout << "string is palindrom" << endl;
    }else{
        cout << "string is not palindrom" << endl; 
    }

    return 0;
}
