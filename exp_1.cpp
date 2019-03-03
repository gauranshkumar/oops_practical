#include <iostream>
using namespace std;
int main()
{
    int num, temp=1, i;
    cout<<"Enter the number : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        temp *= i;
    }
    cout<<"Factorial of num : "<<temp<<endl;
}
