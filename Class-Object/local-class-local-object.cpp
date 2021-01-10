#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
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

A a1,a2;
a1.getX();
a2.getX();
a1.showX();
a2.showX();
return 0;
}
