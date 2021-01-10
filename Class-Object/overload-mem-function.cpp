#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int x;
public:
    void show()
    {
        cout<<x;
    }
        void show(int x)
    {
        cout<<x;
    }
};
int main()
{
    A a1;
    a1.show();
    a1.show(100);
    return 0;
}
