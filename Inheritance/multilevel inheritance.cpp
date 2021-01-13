#include<iostream>
#include<conio.h>
using namespace std;
class top
{
public:
    int a;
    void getdata()
    {
        cin>>a;
    }
    void putdata()
    {
        cout<<a;
    }
};
class middle: public top
{
public:
    int b;
    void square()
    {
        getdata();
        b=a*a;
        cout<<b;
    }
};
class bottom : public middle
{
public:
    int c;
    void cube()
    {
        square();
        c=b*a;
        cout<<c;
    }
};
int main()
{

    bottom b1;
    b1.cube();
    return 0;
}
