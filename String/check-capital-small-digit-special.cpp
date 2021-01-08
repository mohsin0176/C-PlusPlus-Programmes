#include<iostream>
#include<conio.h>
#include<ctype.h>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if(isupper(c))
    {
        cout<<"Uppercase";
    }
    else if(islower(c))
    {
        cout<<"Lowercase";
    }
    else if(isdigit(c))
    {
        cout<<"digit";
    }
    else
        {
        cout<<"special";
        }
    return 0;
}
