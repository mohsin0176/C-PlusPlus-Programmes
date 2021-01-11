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
    A().showX();
    A(100).showX();
    return 0;
}
