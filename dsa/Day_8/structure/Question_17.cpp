#include<iostream>

using namespace std;

struct Patient{
    int patientId;
    char name[50];
    int age;
    char gender;
    char disease[50];
    char admissionDate[15];
    bool isAdmitted;
};

struct Doctor{
    int doctorID;
    char name[50];
    char specialization[50];
    char availableTime[30];
};

struct Staff {
    int staffID;
    char name[50];
    char role[30]; 
    float salary;
};

struct Appointment {
    int appointmentID;
    int patientID;
    int doctorID;
    char date[15]; 
    char time[10]; 
};

struct Billing {
    int billID;
    int patientID;
    float totalAmount;
    char paymentDate[15];
    bool isPaid;
};

int main(){

    Patient p1 = {101, "Rahul Sharma", 30, 'M', "Fever", "2025-03-05", true};
    
    Doctor d1 = {201, "Dr. Priya Mehta", "Cardiologist", "9 AM - 4 PM"};

    Staff s1 = {301, "Neha Singh", "Nurse", 25000.50};

    Appointment a1 = {401, 101, 201, "2025-03-06", "11:00 AM"};

    Billing b1 = {501, 101, 5000.75, "2025-03-06", false};

    cout << "Patient Name: " << p1.name << ", Disease: " << p1.disease << endl;
    cout << "Doctor Name: " << d1.name << ", Specialization: " << d1.specialization << endl;
    cout << "Staff Name: " << s1.name << ", Role: " << s1.role << endl;
    cout << "Appointment Date: " << a1.date << ", Time: " << a1.time << endl;
    cout << "Total Bill: " << b1.totalAmount << ", Paid: " << (b1.isPaid ? "Yes" : "No") << endl;
}