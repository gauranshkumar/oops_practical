#include <iostream>
using namespace std;
class test
{
    int a;
    public:
    void operator ==(test t);
    void input();
};

void test::input()
{
    cout<<"Enter a Number : ";
    cin>>a;
}

void test::operator ==(test t)
{
    if(a == t.a)
        cout<<"Objects are equal."<<endl;
    else
        cout<<"Objects are unequal."<<endl;
}

int main()
{
    test t1, t2;
    t1.input();
    t2.input();
    t1==t2;
}
