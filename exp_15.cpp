#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
    char str[50], str2[50];
    cout<<"Enter first string : ";
    gets(str);
    cout<<"Enter second string : ";
    gets(str2);
    strcat(str, str2);
    cout<<"Conctenated string : "<<endl<<str<<endl;

}
