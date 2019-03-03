#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,i=0,ans=0,rem;
    cout<<"Enter the binary number :";
    cin>>num;
    while(num >= 1)
    {
        rem = num%10;
        num /= 10;
        rem = rem*pow(2, i);
        ans += rem;
        i++;
    }

    cout<<ans<<endl;
}
