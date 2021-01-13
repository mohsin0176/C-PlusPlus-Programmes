#include<iostream>
#include<conio.h>
using namespace std;
int a,b,c,d,e;
class A
{
public:
    void getab()
    {
        cin>>a;
        cin>>b;
    }
};
class B:public A
{
public:
    void getc()
    {
        cin>>c;
    }
};
class C
{
public:
    void getd()
    {
        cin>>d;
    }
};
class D:public B,public C
{
public:
    void result()
    {
        getab();
        getc();
        getd();
        e=a+b+c+d;
        cout<<e;
    }
};
int main()
{
    D d1;
    d1.result();
    return 0;
}
