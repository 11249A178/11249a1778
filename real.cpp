#include <iostream>
using namespace std;
class Complex
{
    float real;
    float imag;
    public:
    void realData()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
 void displayData()
 {
    cout<<real<<"+"<<imag<<"i"<<endl;
 }
 


    Complex add(Complex c2)
    {
Complex temp;
temp.real=real+c2.real;
temp.imag=imag+c2.imag;
return temp;
    }
};
int main()
{
    Complex c1,c2,result;
    cout<<"Enter first complex number:\n";
    c1.realData();
    cout<<"\nEnter second complex number:\n";
    c2.realData();
    result=c1.add(c2);
    cout<<"\n sum of complex number=";
    result.displayData();
    return 0;
}