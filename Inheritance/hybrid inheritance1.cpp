#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int x;
public:
    void getX()
    {
        cin>>x;
    }
    void showX()
    {
        cout<<x;
    }
};
class B:public A
{
    int y;
public:
    void getY()
    {
        cin>>y;
    }
    void showY()
    {
        cout<<y;
    }

};
class C:public A
{
    int z;
public:
    void getZ()
    {
        cin>>z;
    }
    void showZ()
    {
        cout<<z;
    }

};
class D:public B,public C
{
    int w;
public:
    void getW()
    {
        cin>>w;
    }
    void showW()
    {
        cout<<w;
    }

};

int main()
{
    D d1;
    d1.B::getX();
    d1.C::getX();
    d1.getY();
    d1.getZ();
    d1.getW();
    d1.B::showX();
    d1.C::showX();
    d1.showY();
    d1.showZ();
    d1.showW();
    return 0;
}
