#include <iostream>
#include <string>

int main() {
    std::string str = "Hello";
    const char* cstr = str.c_str();
    std::cout << "C-String: " << cstr << std::endl;
    return 0;
}
