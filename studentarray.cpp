#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void inputData() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayData() {
        cout << "------------------------------------\n";
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks       : " << marks << endl;
    }
};
int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    cout << "\n=== Enter Student Details ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].inputData();
    }

    cout << "\n=== Displaying Student Information ===\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayData();
    }

    return 0;
}
