#include<iostream>
#include<coino.h>
using namespace std;
int &min(int &a,int &b)
{
    if(a<b)
    {
        return a;
    }
    else

    {
        return b;
    }
}
void main()
{
    int x=10;
    int y=20;
    cout<<x<<y<<endl;
    min(x,y);
    cout<<x<<y<<endl;
}
