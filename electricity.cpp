#include <iostream>
#include <string>
using namespace std;
class ElectricityBill {
private:
    string customerName;
    int customerID;
    float units;
    float billAmount;

public:
    void inputData() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "Enter Customer ID: ";
        cin >> customerID;

        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    void calculateBill() {
        if (units <= 100)
            billAmount = units * 1.20;
        else if (units <= 200)
            billAmount = 100 * 1.20 + (units - 100) * 2.00;
        else if (units <= 300)
            billAmount = 100 * 1.20 + 100 * 2.00 + (units - 200) * 3.00;
        else
            billAmount = 100 * 1.20 + 100 * 2.00 + 100
