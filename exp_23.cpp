#include <iostream>
using namespace std;
class test
{
    int x,y;
public:
    test()
    {
        x=10;
        y=20;
    }
    void output()
    {
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }

};

int main()
{
    test t1;
    t1.output();
}
