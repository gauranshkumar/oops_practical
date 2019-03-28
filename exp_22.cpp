#include <iostream>
using namespace std;
class Complex
{
    int real;
    float imag;
public:
    void com_sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void input()
    {
        cout<<"Enter real part of the number : ";
        cin>>real;
        cout<<"Enter imaginary part of the number : ";
        cin>>imag;
    }

    void output()
    {
        cout<<real<<"i + "<<imag<<"j"<<endl;
    }
};


int main()
{
    Complex a,b,c;
    cout<<"Enter the values of First Complex Number : "<<endl;
    a.input();
    cout<<"Enter the values of Second Complex Number : "<<endl;
    b.input();
    cout<<endl<<endl;
    a.output();
    b.output();
    c.com_sum(a,b);
    c.output();
}
