#include <iostream>
using namespace std;
int main()
{
    int arr[50],i, siz;
    cout<<"Enter the size of the vector : ";
    cin>>siz;
    cout<<"Enter the elements of the vector : "<<endl;
    for(i=0;i<siz;i++)
    {
        cin>>arr[i];
    }
    int s =siz;

    for(i=0;i<siz;i++)
    {
        for(int j=i;j<siz-1;j++)
        {
            if (arr[i] == arr[j+1])
            {
                for(int k = j;k<siz;k++)
                {
                    arr[k]=arr[k+1];
                }
                siz--;
            }
        }
    }

    cout<<"Vector without duplicates : "<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<arr[i]<<endl;
    }
}
