#include <iostream>
using namespace std;
void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<endl<<*a<<"\t"<<*b<<endl;
}

int main()
{
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    cout<<"Values befor swap : \nA : "<<num1<<"\nB : "<<num2<<endl;
    swapp(&num1, &num2);
    cout<<"Values after swap : \nA : "<<num1<<"\nB : "<<num2<<endl;
}
