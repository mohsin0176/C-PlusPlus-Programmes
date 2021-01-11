#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int x;
public:
    A(){};
    A(int a){x=a};
    void showX()
    {
        cout<<x;
    }
    A operator=(A &a)
    {
        x=a.x;
        return A(x);
    }
};
int main()
{
    A a1(10);
    A a2;
    a1.showX();
    a2=a1;
    a2.showX();
    A a3=a1;
    a3.showX();
    A a4(a1);
    a4.showX();
    return 0;
}
