#include<iostream>

using namespace std;

struct Book {
    char Name[50];
    char Author[50];
    float price;
    float rating;
    bool available;
};

int main(){

Book b[20] = {
    {"The Great Gatsby", "F. Scott Fitzgerald", 10.99, 4.5, true},
    {"To Kill a Mockingbird", "Harper Lee", 12.50, 4.8, true},
    {"1984", "George Orwell", 9.99, 4.6, false},
    {"Pride and Prejudice", "Jane Austen", 11.25, 4.7, true},
    {"The Catcher in the Rye", "J.D. Salinger", 8.99, 4.3, false},
    {"Moby-Dick", "Herman Melville", 14.99, 4.1, true},
    {"War and Peace", "Leo Tolstoy", 19.99, 4.5, true},
    {"The Lord of the Rings", "J.R.R. Tolkien", 29.99, 4.9, false},
    {"Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 15.99, 4.9, true},
    {"The Hobbit", "J.R.R. Tolkien", 13.49, 4.8, true},
    {"Crime and Punishment", "Fyodor Dostoevsky", 17.50, 4.6, false},
    {"The Alchemist", "Paulo Coelho", 9.75, 4.4, true},
    {"The Book Thief", "Markus Zusak", 11.89, 4.7, true},
    {"Brave New World", "Aldous Huxley", 10.50, 4.4, false},
    {"The Road", "Cormac McCarthy", 13.20, 4.5, true},
    {"Wuthering Heights", "Emily Brontë", 12.30, 4.3, true},
    {"Anna Karenina", "Leo Tolstoy", 16.75, 4.6, false},
    {"Frankenstein", "Mary Shelley", 8.50, 4.2, true},
    {"The Odyssey", "Homer", 14.95, 4.5, true},
    {"Dune", "Frank Herbert", 18.50, 4.8, false}
    };

    for (int i = 0; i < 20; i++){
        cout << "Welcome to Library Management System " << endl;
        cout << "Book title Name is: " << b[i].Name << endl;
        cout << "Book title Author is: " << b[i].Author << endl;
        cout << "Book title Price is: " << b[i].price << endl;
        cout << "Book title Rating is: " << b[i].rating << endl;
        cout << "Book title Available is: " << b[i].available << endl;
        cout << endl << endl;
    }
}