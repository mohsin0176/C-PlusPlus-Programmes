#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='A'&& c<='Z')
    {
        cout<<"Uppercase";
    }
    else if(c>='a'&& c<='z')
    {
        cout<<"Lowercase";
    }
    else if(c>='0'&& c<='9')
    {
        cout<<"Digit";
    }
    else
    {
        cout<<"Special Character";
    }
    return 0;
}
