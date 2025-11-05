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
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Price: ";
        cin >> price;
    }
    void displayData() {
        cout << "\n--- Book Details ---\n";
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Price  : Rs. " << price << endl;
    }
};
int main() {
    Book b1;
    cout << "Enter details of the book:\n";
    b1.inputData();
    cout << "\nDisplaying Book Information:\n";
    b1.displayData();
    return 0;
}
