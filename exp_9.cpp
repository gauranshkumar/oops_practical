#include <iostream>
using namespace std;
int main()
{
    int arr[50],siz,i,j;
    cout<<"Enter the size : ";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<siz;i++)
    {
        for(j=i;j<siz-1;j++)
        {
            if(arr[i]>arr[j+1])
            {
                int temp = arr[i];
                arr[i]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<endl<<"Bubble Sorted array :"<<endl;

    for(i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
}
