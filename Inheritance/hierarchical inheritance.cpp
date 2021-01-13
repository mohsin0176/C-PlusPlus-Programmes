#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    int a,b;
    void getnumber()
    {
        cin>>a;
    }
};
class B:public A
{
public:
    void square()
    {
        getnumber();
        cout<<a*a;
    }
};
class C:public A
{
public:
    void cube()
    {
        getnumber();
        cout<<a*a*a;
    }
};
int main()
{
    B b1;
    b1.square();
    C c1;
    c1.cube();
    return 0;
}
