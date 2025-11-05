#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int marks;

public:
    void input() {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }

    
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    bool operator > (Student s) {
        return marks > s.marks;
    
    
    }
    bool operator < (Student s) {
        return marks < s.marks;
    }

    bool operator == (Student s) {
        return marks == s.marks;
    }

    string getName() {
        return name;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for first student:\n";
    s1.input();

    cout << "\nEnter details for second student:\n";
    s2.input();

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();

    cout << "\n--- Comparison Results ---\n";

    if (s1 > s2)
        cout << s1.getName() << " has higher marks than " << s2.getName() << "." << endl;
    else if (s1 < s2)
        cout << s2.getName() << " has higher marks than " << s1.getName() << "." << endl;
    else if (s1 == s2)
        cout << "Both students have equal marks." << endl;

    return 0;
}
