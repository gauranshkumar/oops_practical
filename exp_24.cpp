#include <iostream>
using namespace std;
class test
{
    int x,y;
    public:
    test(int a, int b);
    void output();
};

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
    test t1(50, 100);
    cout<<"Values of X, Y AFTER Initialization : "<<endl;
    t1.output();
    int i,j;
    cout<<"Enter The value of X : ";
    cin>>i;
    cout<<"Enter The value of Y : ";
    cin>>j;

    test t2(i, j);
    cout<<"Values after input : "<<endl;
    t2.output();
}
