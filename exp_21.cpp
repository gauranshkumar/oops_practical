#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Students
{
    char name[100];
    char branch[100];
    char sem[100];

public:
    void input();
    void output();
};

void Students::input()
{
    cout<<"Enter the name : ";
    gets(name);
    cout<<"Enter the Branch : ";
    gets(branch);
    cout<<"Enter the semester : ";
    gets(sem);
    cout<<endl;
}

void Students::output()
{
    printf("%s\t%s\t%s\n",name,branch,sem);
}


int main()
{
    Students st[2];
    int i;

    for(i=0;i<2;i++)
    {
        cout<<"Enter the Details of "<<i+1<<" Student :\n";
        st[i].input();
    }

    printf("Name \t\tBranch\tSemester \n");

    for(i=0;i<2;i++)
    {
        st[i].output();
    }


    return 0;
}
