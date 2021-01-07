#include<iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c>=65&&c<=90)
    {
        cout<<"Uppercase";
    }
    else if(c>=97 && c<=112)
    {
        cout<<"Lowercase";
    }
    else if(c>=48 && c<=57)
    {
        cout<<"digit";
    }
    else

    {
        cout<<"Special symbol";
    }
    return 0;
}
