#include <iostream>
using namespace std;
class small
{
    private:
    int a,b;

    public:
    void input();
    void output();
};

void small::input()
{
    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b : ";
    cin>>b;
}

void small::output()
{
    if (a<b)
        cout<<"Smallest is : "<<a<<endl;
    else
        cout<<"Smallest is : "<<b<<endl;
}

int main()
{
    small var;

    var.input();
    var.output();
}
