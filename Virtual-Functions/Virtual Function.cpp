#include<iostream>
#include<conio.h>
using namespace std;
class B
{
public:
    virtual void display()
    {
        cout<<"Content of Base Class";
    }
};
class D1:public B
{
    public:
     void display()
    {
        cout<<"Content of First Derived Class";
    }
};
class D2:public B
{
    public:
     void display()
    {
        cout<<"Content of Second Derived Class";
    }
};
int main()
{
    B *b;
    D1 d1;
    D2 d2;
    b=&d1;
    b->display();
    b=&d2;
    b->display();

    return 0;
}
