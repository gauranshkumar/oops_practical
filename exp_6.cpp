#include <iostream>
using namespace std;
int main()
{
    char oper;
    int num1, num2, result;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Select operation : "<<endl;
    cout<<"1. Addition (+)"<<endl;
    cout<<"2. Subtraction (-)"<<endl;
    cout<<"3. Multiplication (*)"<<endl;
    cout<<"4. Division (/)"<<endl;
    cin>>oper;
    switch(oper)
    {
        case '1':
        case '+':
        result = num1 + num2;
        cout<<"Addition : "<<result<<endl;
        break;

        case '2':
        case '-':
        result = num1 - num2;
        cout<<"Subtraction : "<<result<<endl;
        break;

        case '3':
        case '*':
        result = num1 * num2;
        cout<<"Multiplication : "<<result<<endl;
        break;

        case '4':
        case '/':
        result = num1 / num2;
        cout<<"Division : "<<result<<endl;
        break;
    }
}
