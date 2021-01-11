#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int x;
public:
    A(int a)
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
    int a;
    cin>>a;
    A a1(a);
    a1.showX();

    return 0;
}
