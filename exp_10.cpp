#include <iostream>
using namespace std;
void bincon(int num)
{
    if(num<=1)
    {
        cout<<num;
        return;
    }
    int rem = num%2;
    bincon(num/2);
    cout<<rem;
}
int main()
{
    int num,bin,i=0,ans=0;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Binary of "<<num<<" : ";
    bincon(num);
    cout<<endl;
}
