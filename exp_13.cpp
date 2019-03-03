#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row,col,i,j;
    cout<<"Enter the size of matrix (row x col) : ";
    cin>>row>>col;
    cout<<"Enter the elements of matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Normal Matrix : "<<endl;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<"Transposed Matrix : "<<endl;
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}
