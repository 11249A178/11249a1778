#include <iostream>
#include <iomanip>
using namespace std;
class student {
    string name;
    int rollnumber;
    float marks;
    public:
    void getstudentdetails() {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter rollnumber:";
        cin>>rollnumber;
        cout<<"enter the marks:";
        cin>>marks;
    }
    void displaystudentdetails(){
        cout<<"\n name:"<<name;
        cout<<"\n rollnumbe:"<<rollnumber;
        cout<<"\n marks:"<<marks<<endl;
    }
};
int main(){
    int n;
    cout<<"enter number of students:";
    cin>>n;
    student s[100];
    for(int i=0;i<n;i++){
        cout<<"\n---student"<<i+1<<"---\n";
        s[i].getstudentdetails();
    }
    cout<<"\n---student details---\n";
    for (int i=0;i<n;i++){
        s[i].displaystudentdetails();

    }
    return 0;
}