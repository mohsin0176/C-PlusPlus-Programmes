#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int x;
public:
    A(int a=10)
    {
        x=a;
    }
    void showX()
    {
        cout<<x;
    }
};
int main()
{
    A a1;
    A a2(100);
    a1.showX();
    a2.showX();
    return 0;
}
