#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }
    void displayData() {
        cout << "\n--- Student Details ---\n";
        cout << "Name  : " << name << endl;
        cout << "Roll  : " << rollNo << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main() {
    Student s1("Alice", 101, 89.5);
    Student s2("Bob", 102, 92.3);
    s1.displayData();
    s2.displayData();

    return 0;
}
