#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if(num <= 1)
    {
        return num;
    }

    return fibonacci(num-1)+fibonacci(num-2);
}
int main()
{
    int num,i;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Fibonacci  series till "<<num<<" : "<<endl;
    for(i=0;i<=num;i++)
    {
        cout<<fibonacci(i)<<endl;
    }
}
