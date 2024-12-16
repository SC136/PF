//Book Management System

#include <iostream>

using namespace std;

class Book {
    private: int id;
    string title;
    string author;
    float price;

    public:

        Book() {};

    Book(int a, string b, string c, float d) {
        id = a;
        title = b;
        author = c;
        price = d;
    };

    void displayDetails() {
        cout << "\nID: " << id << "\nTitle: " << title << "\nAuthor: " << author << "\nPrice: " << price << "\n";
    };
};

int main() {
    int n;
    cout << "\nHow many books you want to add?: ";
    cin >> n;

    Book b[n];

    int x1;
    string x2, x3;
    float x4;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter ID, Title, Author, Price:\n";
        cin >> x1 >> x2 >> x3 >> x4;
        b[i] = Book(x1, x2, x3, x4);
    }

    cout << "\nBOOK DETAILS:";

    for (int i = 0; i < n; i++) {
        b[i].displayDetails();
    }

    return 0;
};
