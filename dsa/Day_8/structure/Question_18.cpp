#include<iostream>

using namespace std;

struct Product{
    char name[50];
    int id;
    float price;
};

int main(){
    Product p = {"Laptop", 101, 799.99};
    printf("Product: %s\nID: %d\nPrice: $%.2f\n", p.name, p.id, p.price);
    cout << endl << endl;
    return 0;
}
