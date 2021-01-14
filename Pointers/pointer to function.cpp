#include<iostream>
#include<conio.h>
using namespace std;
void Add(int,int);
void Sub(int,int);
int main()
{
    int a=10,b=20;
    void (*pf)(int,int);
    pf=Add;
    (*pf)(a,b);
    pf=Sub;
    (*pf)(a,b);
    return 0;
}
void Add(int x,int y)
{
    int s;
    s=x+y;
    cout<<s;
}
void Sub(int x,int y)
{
    int d;
    d=x-y;
    cout<<d;
}
