#include<iostream>
#include<conio.h>
using namespace std;
class B
{
public:
    void display()
    {
        cout<<"Content of Base Class";
    }
};
class D:public B
{
public:
    void display()
    {
        cout<<"Content of Derived Class";
    }
};
int main()
{
    B *b;
    D d;
    b=&d;
    b->display();

    return 0;
}
