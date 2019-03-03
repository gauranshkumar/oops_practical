#include <iostream>
using namespace std;
int main()
{
    int arr1[20][20],arr2[20][20],ans[20][20];
    int r1,r2,c1,c2,i,j,k;
    cout<<"Enter the size of matrix1 (row x col):";
    cin>>r1>>c1;
    cout<<"Enter the size of matrix2 (row x col):";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"size of col 1 and row 2 mismatch."<<endl;
        exit(0);

    }
    cout<<"Enter the values of matrix 1 :"<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the values of matrix 2 :"<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            ans[i][j]=0;
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                ans[i][j] +=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"The values of matrix 1 :"<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The values of matrix 2 :"<<endl;
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Multiplied matrix :"<<endl;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
}
