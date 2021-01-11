#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
protected:
    int val;
public:
    void setData(int v)
    {
        val=v;
    }
};
class Derived:public Base
{
public:
    void cube()
    {
        cout<<val<<"is"<<val*val*val;
    }
};
int main()
{
    Derived d;
    d.setData(10);
    d.cube();
    return 0;
}
