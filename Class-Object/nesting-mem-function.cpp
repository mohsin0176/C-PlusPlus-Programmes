#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int x;
    int y;
public:
    void get()
    {
        cin>>x>>y;
    }
    void showX()
    {
        cout<<x;
    }
    void showY()
    {
        cout<<y;
    }
};
void main()
{
    A a1;
    a1.get();
    a1.showY();
}
