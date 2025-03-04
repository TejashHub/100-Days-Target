#include<iostream>
using namespace std;

#define END endl << endl;

struct Student{
    string name;
    int age;
};

int main(){
    Student s1 = {"Payal", 21};
    cout << "name " << s1.name << " and " << "age " << s1.age << END;
}