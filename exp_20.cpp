#include <iostream>
using namespace std;
class matrix
{
    int a[10][10],b[10][10],r,c;

    public:
    void readm();
    void admat();
};

void matrix::readm()
{
    int i,j;
    cout<<"Enter the size of matrix (row x col) : "<<endl;
    cin>>r>>c;
    cout<<"Enter the elements of Matrix 1 : "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of Matrix 2 : "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

}

void matrix::admat()
{
    int ans[r][c],i,j;
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            ans[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Added Matrix : "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;

}


int main()
{
    matrix mat;
    mat.readm();
    mat.admat();
}
