#include<iostream>
using namespace std;
class test
{
    int x,y;
    public:
    test();
    test(int a, int b);
    void output();
};

test::test()
{
    x = 100;
    y = 233;
}

test::test(int a, int b)
{
    x = a;
    y = b;
}

void test::output()
{
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
}

int main()
{
    test t1;
    cout<<"valuse after initialization : "<<endl;
    t1.output();
    test t2(1110,2345);
    cout<<"valuse after arguments : "<<endl;
    t2.output();
}
