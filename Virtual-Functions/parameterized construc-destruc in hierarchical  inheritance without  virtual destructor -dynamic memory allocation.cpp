#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private :
    int *px;
public:
    A(int a)
    {
        px=new int(a);
        cout<<"Para constructor";
    }
    virtual ~A()
    {
        cout<<"Para destructor";
        delete px;
    }
    virtual void show()
    {
        cout<<*px;
    }
};
class B:public A
{
private :
    int *py;
public:
    B(int a,int b):A(a)
    {
        py=new int(b);
        cout<<"Para constructor";
    }
    ~B()
    {
        cout<<"Para destructor";
        delete py;
    }
    void show()
    {
        cout<<*py;
    }
};
class C:public A
{
private :
    int *pz;
public:
    C(int a,int c):A(a)
    {
        pz=new int(c);
        cout<<"Para constructor";
    }
    ~C()
    {
        cout<<"Para destructor";
        delete pz;
    }
    void show()
    {
        cout<<*pz;
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


