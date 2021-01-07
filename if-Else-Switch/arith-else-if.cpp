#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    char c;
    cin>>c>>a>>b;
    if(c=='+')
    {
        r=a+b;
        cout<<r;
    }
    else if(c=='-')
    {
        r=a-b;
        cout<<r;
    }
        else if(c=='*')
    {
        r=a*b;
        cout<<r;
    }
        else if(c=='/')
    {
        r=a/b;
        cout<<r;
    }
    else
    {
        r=a%b;
        cout<<r;
    }

    return 0;
}
