#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class abc;
class xyz
{
    int x;
public:
    void setValue(int i)
    {
        x=i;
    }
    friend void max(xyz,abc);
};
class abc
{
    int a;
public:
    void setvalue(int i)
    {
        a=i;
    }
    friend void max(xyz,abc);
};
void max(xyz m,abc n)
{
    if(m.x>=n.a)
    {
        cout<<m.x;
    }
    else
    {
        cout<<n.a;
    }
}
int main()
{
    xyz kmp;
    kmp.setValue(10);
    abc dmp;
    dmp.setvalue(20);
    max(kmp,dmp);
    return 0;
}
