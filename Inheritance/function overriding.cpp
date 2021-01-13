#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int x;
public:
    A(){x=0;cout<<"Default Constructor";}
    A(int a)
    {
        x=a;
        cout<<"Parameterized Constructor";
    }
    void show()
    {
        cout<<x;
    }
};
class B:public A
{
private:
    int y;
public:
    B():A()
    {
        y=0;
        cout<<"Default Constructor";
    }
    B(int a,int b):A(a)
    {
        y=b;
        cout<<"Parameterized Constructor";
    }
    void show()
    {
        cout<<y;
    }
};
int main()
{
    B b1(10,20);
    b1.show();
    return 0;
}
