#include <iostream>
using namespace std;
class test
{
    int x,y;
    public:
    test(int a, int b);
    test(const test &t);
    void output();
};

test::test(int a, int b)
{
    x = a;
    y = b;
}

test::test(const test &t)
{
    x = t.x;
    y = t.y;
}

void test::output()
{
    cout<<"X : "<<x<<endl;
    cout<<"Y : "<<y<<endl;
}

int main()
{
    test t1(1122,3344);
    cout<<"Values of t1 object : "<<endl;
    cout<<"Valuse of t1 initialised with constructor : "<<endl;
    t1.output();
    test t2(t1);
    cout<<"Values of t2 object : "<<endl;
    cout<<"Valuse of t2 initialised with copy constructor : "<<endl;
    t2.output();

}
