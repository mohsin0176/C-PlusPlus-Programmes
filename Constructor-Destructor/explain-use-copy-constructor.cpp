#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    Distance(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    Distance(Distance &d)
    {
        feet=d.feet;
        inches=d.inches;
    }
    void showDist()
    {
        cout<<feet<<inches;
    }
};
int main()
{
    Distance d1(10,20);
    Distance d2(d1);
    Distance d3=d1;
    d1.showDist();
    d2.showDist();
    d3.showDist();
    return 0;

    return 0;
}
