#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string str = "apple,banana,grape";
    std::stringstream ss(str);
    std::string token;

    while (getline(ss, token, ',')) {
        std::cout << token << std::endl;
    }

    return 0;
}