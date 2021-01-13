#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private :
    int x;
public:
    A(int a)
    {
        x=a;
        cout<<"Para constructor";
    }
    ~A()
    {
        cout<<"Para destructor";
    }
    virtual void show()
    {
        cout<<x;
    }
};
class B:public A
{
private :
    int y;
public:
    B(int a,int b):A(a)
    {
        y=b;
        cout<<"Para constructor";
    }
    ~B()
    {
        cout<<"Para destructor";
    }
    void show()
    {
        cout<<y;
    }
};
class C:public A
{
private :
    int z;
public:
    C(int a,int c):A(a)
    {
        z=c;
        cout<<"Para constructor";
    }
    ~C()
    {
        cout<<"Para destructor";
    }
    void show()
    {
        cout<<z;
    }
};
int main()
{
    A *p;
    p=new A(10);
    p->show();
    delete p;
    p=new B(10,20);
    p->show();
    delete p;
    p=new C(10,30);
    p->show();
    delete p;
    return 0;
}
