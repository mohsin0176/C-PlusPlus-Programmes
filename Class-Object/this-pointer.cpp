#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int x;
public:
    void showAddress()
    {
        cout<<this;
    }
};
void main()
{
    A a1,a2,a3;
    a1.showAddress();
    a2.showAddress();
    a3.showAddress();
}
