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
    void showX() const
    {
        cout<<x;
    }
};
int main()
{
    A a1;
    a1.getX();
    a1.showX();
    return 0;
}
