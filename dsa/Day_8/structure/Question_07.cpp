#include<iostream>
using namespace std;

struct Students{
    char name[70];
    int age;
};

Students getStudent(){
    Students s = {"alice", 23};
    return s;
}

int main(){
    Students s = getStudent();
    cout << s.age << endl;
    cout << s.name << endl;
}