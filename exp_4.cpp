#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'A':
        cout<<"It is a vowel."<<endl;
        break;

        case 'e':
        case 'E':
        cout<<"It is a vowel."<<endl;
        break;

        case 'i':
        case 'I':
        cout<<"It is a vowel."<<endl;
        break;

        case 'o':
        case 'O':
        cout<<"It is a vowel."<<endl;
        break;

        case 'u':
        case 'U':
        cout<<"It is a vowel."<<endl;
        break;

        default:
        cout<<"It is not a vowel, it is consonant."<<endl;
        break;

    }
}
