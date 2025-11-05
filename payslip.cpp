#include <iostream>
#include <string> // You need this header for the string class

class payslip {
private:
    int empno, UAN, basicpay, DA, HRA, Gpay, totalDeduction, netpay, EPF, ptax;
    std::string name, dept, design, pan_no, IFSC_code, bank_no;

public:
    void getDetails();
    void calculate();
    void printBill();
};

void payslip::getDetails() {
    std::cout << "Enter Employee Number: ";
    std::cin >> empno;
    std::cout << "Employee's Name: ";
    std::cin.ignore(); // Clears the input buffer before reading the name
    std::getline(std::cin, name);
    std::cout << "Employee's Department: ";
    std::getline(std::cin, dept);
    std::cout << "Employee's Designation: ";
    std::getline(std::cin, design);
    std::cout << "Employee's PAN Number: ";
    std::cin >> pan_no;
    std::cout << "Employee's IFSC Code: ";
    std::cin >> IFSC_code;
    std::cout << "Employee's Bank Account Number: ";
    std::cin >> bank_no;
    std::cout << "Enter the Basic Pay: ";
    std::cin >> basicpay;
}

void payslip::calculate() {
    DA = (basicpay * 0.80);
    HRA = (basicpay * 0.10);
    EPF = (basicpay * 0.12);
    ptax = (basicpay * 0.02);
    Gpay = basicpay + DA + HRA;
    totalDeduction = EPF + ptax;
    netpay = Gpay - totalDeduction;
}

void payslip::printBill() {
    cout << "\n--- Employee Payslip ---\n";
    cout << "Employee Number: " << empno <<endl;
    cout << "Employee Name: " << name <<endl;
    cout << "Department: " << dept <<endl;
    cout << "Designation: " << design <<endl;
    scout << "PAN No: " << pan_no <<endl;
    cout << "IFSC Code: " << IFSC_code <<endl;
    cout << "Bank Account No: " << bank_no << endl;
    cout << "\n--- Earnings ---\n";
    cout << "Basic Pay: " << basicpay <<endl;
    cout << "DA (80%): " << DA <<endl;
    cout << "HRA (10%): " << HRA << endl;
    cout << "Gross Pay: " << Gpay <<endl;
    cout << "\n--- Deductions ---\n";
    cout << "EPF (12%): " << EPF <<endl;
    cout << "Professional Tax (2%): " << ptax <<endl;
    cout << "Total Deductions: " << totalDeduction << endl;
    cout << "\n--- Net Pay ---\n";
    cout << "Net Pay: " << netpay << std::endl;
}

int main() {
    payslip employee1;

    employee1.getDetails();
    employee1.calculate();
    employee1.printBill();

    return 0;
}