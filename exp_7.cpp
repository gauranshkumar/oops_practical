#include <iostream>
using namespace std;
int main()
{
    int num,rem=0,ans=0,temp;
    cout<<"Enter the number : ";
    cin>>num;
    temp = num;
    while(num > 0)
    {
        rem = num %10;
        num /= 10;
        ans = rem+ans*10;
    }

    if(ans == temp)
        cout<<"The number is palindrome."<<endl;

    else
        cout<<"The number is not palindrome."<<endl;

}
