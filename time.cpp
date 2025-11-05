#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    void getTime();
    void addTime(Time x1, Time x2);
    void displayTime();
};

void Time::getTime() {
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
cin >> minutes;
}

void Time::addTime(Time x1, Time x2) {
    minutes = x1.minutes + x2.minutes;
    hours = x1.hours + x2.hours + (minutes / 60);
    minutes %= 60;
}

void Time::displayTime() {
cout << "Hours: " << hours <<endl;
cout << "Minutes: " << minutes <<endl;
}

int main() {
    Time t1, t2, t3;
    
    cout << "Enter time for t1:" <<endl;
    t1.getTime();
    
    cout << "\nEnter time for t2:" <<endl;
    t2.getTime();
    
    t3.addTime(t1, t2);
    
    cout << "\nTime t1: " <<endl;
    t1.displayTime();
    
    cout << "\nTime t2: " <<endl;
    t2.displayTime();
    
    cout << "\nSum of times (t3): " <<endl;
    t3.displayTime();

    return 0;
}