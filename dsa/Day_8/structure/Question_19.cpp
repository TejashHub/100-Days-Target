#include<iostream>

struct Ticket {
    char passengerName[50];
    int trainNumber;
    char destination[50];
};

int main() {
    struct Ticket t = {"John Doe", 1256, "New York"};
    printf("Passenger: %s\nTrain No: %d\nDestination: %s\n", t.passengerName, t.trainNumber, t.destination);
    return 0;
}