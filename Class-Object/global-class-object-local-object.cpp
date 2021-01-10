#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
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
A a1;
void main()
{
    A a2;
    a1.getX();
    a2.getX();
    a1.showX();
    a2.showX();
}
