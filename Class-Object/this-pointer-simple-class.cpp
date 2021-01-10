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
        cin>>this->x;
    }
    void callgetX()
    {
        cin>>this->getX();
    }
    int showX()
    {
        return this->x;
    }
};
void main()
{
    A a1;
    a1.callgetX();
    cout<<a1.showX();
}
