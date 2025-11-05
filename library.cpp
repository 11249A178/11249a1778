#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int bookID;
    float price;

public:
    void inputData() {
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Price: ";
        cin >> price;
    }
    void displayData() {
        cout << "------------------------------------\n";
        cout << "Book Title : " << title << endl;
        cout << "Author     : " << author << endl;
        cout << "Book ID    : " << bookID << endl;
        cout << "Price      : $" << price << endl;
    }
};
int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;
    Book books[n];

    cout << "\n=== Enter Book Details ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].inputData();
    }

    cout << "\n=== Displaying Book Details ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].displayData();
    }

    return 0;
}
