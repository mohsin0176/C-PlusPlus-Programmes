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
int main()
{
    B b1;
    C c1;
 b1.getX();
 b1.getY();
 c1.getX();
 c1.getZ();
 b1.showX();
 b1.showY();
 c1.showX();
 c1.showZ();


    return 0;
}

