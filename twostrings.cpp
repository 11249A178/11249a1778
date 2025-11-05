#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char str[100];

public:
   
    MyString() {
        str[0] = '\0';
    }

    MyString(const char* s) {
        strcpy(str, s);
    }
    
    void display() {
        cout << str << endl;
    }

   
    MyString operator + (MyString s) {
        MyString temp;
        strcpy(temp.str, str);      
        strcat(temp.str, s.str);   
        return temp;
    }
};


int main() {
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString s3;

    s3 = s1 + s2; 
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();

    cout << "\nAfter Concatenation: ";
    s3.display();

    return 0;
}
