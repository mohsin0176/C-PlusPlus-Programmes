#include<iostream>
#include<conio.h>
using namespace std;
class data
{
private:
    int d;
public:
    data()
    {
        d=0;
    }
    data(int dt)
    {
        dt=0;
    }
    int operator>(data obj)
    {
        if(d>obj.d)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }
    int operator==(data obj)
    {
        if(d==obj.d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    data t1(43),t2(20);
    if(t1==t2)
    {
        cout<<"Numbers are Equal"
    }
    else if(t1>t2)
    {
        cout<<"T1 Greater";
    }
    else
    {
        cout<<"T2 Greater";
    }
    return 0;
}
