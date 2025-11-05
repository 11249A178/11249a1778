#include<iostream>
using namespace std;
class sample;
{
    private:
    int num;
    public:
    Sample(int n)
    {
        num=n;
        cout<<"Constructor called for object with num="<<num<<endl;
    }
    ~Sample()
    {
        cout<<"Destructor called for object with num="<<num<<endl;
    }
};
int main(){
cout<<"Creating object s1:\n";
Sample s1(10);
cout<<"\nCreating object s2 inside a block:\n";
{
   Sample s2(20);
   cout<<"Insinde the block\n";
}

cout<< "\nBlock to main function\n";
return 0;
}