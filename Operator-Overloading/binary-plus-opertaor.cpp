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
    data (int dt)
    {
        d=dt;
    }
    void show()
    {
        cout<<d;
    }
    data operator+(data obj)
    {
        data temp;
        temp.d=obj.d+d;
        return temp;
    }
};
int main()
{
    data d1(2),d2(10),d3;
    d3=d1+d2;
    d3.show();
    return 0;
}
