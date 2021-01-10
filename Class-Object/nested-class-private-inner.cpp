#include<iostream>
#include<conio.h>
using namespace std;
class outer
{
    int a;
    class inner
    {
    int c;
public:
    int d;
    inner()
    {
        c=40;d=30;

    }
    void showinner()
    {
        cout<<c<<d;
    }
    };
    inner ob1;
public:
    int b;
    inner ob2;
    outer()
    {
        a=10;
        b=20;
    }
    void showouter()
    {
        cout<<a<<b<<ob2.d;
        ob1.showinner();
    }
};
void main()
{
    outer ob;
    cout<<ob.b;
    ob.showouter();
    ob.ob2.showinner();
}
