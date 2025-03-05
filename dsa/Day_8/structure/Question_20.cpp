#include<iostream>
using namespace std;

struct Vehicle{
    char owner[50];
    char model[50];
    char registrationNumber[20];
};

int main() {
    struct Vehicle v = {"Alice", "Toyota Corolla", "ABC-1234"};
    printf("Owner: %s\nModel: %s\nRegistration No: %s\n", v.owner, v.model, v.registrationNumber);
    return 0;
}