#include <iostream>
using namespace std;
class Number {
private:
    int x, y;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    void operator -() {
        x = -x;
        y = -y;
    }
};

int main() {
    Number n;

    n.input();

    cout << "\nBefore overloading:\n";
    n.display();
    -n;

    cout << "\nAfter overloading (-n):\n";
    n.display();

    return 0;
}
