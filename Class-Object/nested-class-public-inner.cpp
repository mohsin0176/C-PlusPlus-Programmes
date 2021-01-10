#include<iostream>
#include<conio.h>
using namespace std;
class outer
{
    int a;
public:
    int b;
    class inner
    {
        int c;
    public:
        int d;
        inner()
        {
            c=30;d=40;
        }
        void showInner()
        {
            cout<<c<<d;
        }
    };
    inner ob1;
    outer()
    {
        a=10;
        b=10;
    }
    void showOuter()
    {
        cout<<a<<b<<ob1.d;
        ob1.showInner();
    }
};
void main()
{
    outer ob;
    outer::inner ob2;
    ob.showOuter();
    ob2.showInner();
}
