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
class B:protected A
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
int main()
{
    B b1;
    b1.getY();
    b1.showY();
    return 0;
}

