#include<iostream>
using namespace std;

struct Salary{
    float balance;
    float hr;
    float da;
    float grossSalary;
};

struct Employee{
    char name[21];
    string address;
    char city[20];
    struct Salary Salary;
};

int main(){
    Employee e1 = {"Payal", "Near Bhilad", "Vapi", {4567.89, 2134.67, 3456.890}};

    int grossSalary = e1.Salary.balance + e1.Salary.hr + e1.Salary.da ;

    cout << "Employee Name: " << e1.name << endl;
    cout << "Address: " << e1.address << endl;
    cout << "City: " << e1.city << endl;
    cout << "gross salary: " << grossSalary << endl;

    return 0;  // Fixed: Added semicolon
}
