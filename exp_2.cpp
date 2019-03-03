#include <iostream>
using namespace std;
int main()
{
    int num,rem=0,ans=0,i;
    cout<<"Enter the number : ";
    cin>>num;
    while(num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem;
    }
    cout<<"Sum of digits : "<<ans<<endl;
}
