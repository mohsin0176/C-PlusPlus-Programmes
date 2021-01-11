#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int x;
public:
    A(){}
    A(int a){x=a;}
    A(A &a)
    {
        x=a.x;
    }
    void showX()
    {
        cout<<x;
    }
    A& operator=(A &a)
    {
        x=a.x;
        return *this;
    }
};
int main()
{
    A a1(10);
    A a2,a3;
    a1.showX();
    a3=a2=a1;
    a2.showX();
    a3.showX();
    A a4=a1;
    a4.showX();
    A a5(a1);
    a5.showX();
    return 0;
}
