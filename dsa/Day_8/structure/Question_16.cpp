#include<iostream>

using namespace std;

struct Address {
    char city[20];
    int pin;
    string location;
};

struct Student {
    int rollNo;
    char Name[50];
    char ClassName[30];
    char branch[20];
    struct Address address;
};

int main(){

Student students[20] = {
    {101, "Aman Sharma", "12th", "Science", {"Delhi", 110001, "Connaught Place"}},
    {102, "Priya Gupta", "12th", "Commerce", {"Mumbai", 400001, "Andheri West"}},
    {103, "Rahul Verma", "11th", "Arts", {"Kolkata", 700001, "Salt Lake"}},
    {104, "Neha Kapoor", "12th", "Science", {"Chennai", 600001, "T Nagar"}},
    {105, "Vikas Yadav", "11th", "Commerce", {"Bangalore", 560001, "Electronic City"}},
    {106, "Sneha Mehta", "12th", "Arts", {"Hyderabad", 500001, "Banjara Hills"}},
    {107, "Rohit Singh", "11th", "Science", {"Pune", 411001, "Shivaji Nagar"}},
    {108, "Anjali Pandey", "12th", "Commerce", {"Jaipur", 302001, "Malviya Nagar"}},
    {109, "Manish Dubey", "11th", "Arts", {"Lucknow", 226001, "Hazratganj"}},
    {110, "Sakshi Jain", "12th", "Science", {"Ahmedabad", 380001, "Navrangpura"}},
    {111, "Arjun Nair", "11th", "Commerce", {"Kochi", 682001, "Marine Drive"}},
    {112, "Kritika Bose", "12th", "Arts", {"Bhubaneswar", 751001, "Sahid Nagar"}},
    {113, "Deepak Reddy", "11th", "Science", {"Vishakhapatnam", 530001, "MVP Colony"}},
    {114, "Tanya Malhotra", "12th", "Commerce", {"Indore", 452001, "Vijay Nagar"}},
    {115, "Harsh Vardhan", "11th", "Arts", {"Nagpur", 440001, "Dharampeth"}},
    {116, "Nisha Saxena", "12th", "Science", {"Chandigarh", 160001, "Sector 17"}},
    {117, "Vivek Patel", "11th", "Commerce", {"Surat", 395001, "Adajan"}},
    {118, "Pooja Sinha", "12th", "Arts", {"Patna", 800001, "Kankarbagh"}},
    {119, "Aakash Sharma", "11th", "Science", {"Bhopal", 462001, "MP Nagar"}},
    {120, "Riya Choudhary", "12th", "Commerce", {"Ranchi", 834001, "Harmu"}}
};


    for (int i = 0; i < 20; i++){
        cout << "Welcome to Student Record Management System " << endl;
        cout << "Student RollNo is: " << students[i].rollNo << endl;
        cout << "Student Name is: " << students[i].Name << endl;
        cout << "Student class is: " << students[i].ClassName << endl;
        cout << "Student City is: " << students[i].address.city << endl;
        cout << "Student PinCode is: " << students[i].address.pin << endl;
        cout << "Student Location is: " << students[i].address.location << endl;
        cout << endl << endl;
    }
}