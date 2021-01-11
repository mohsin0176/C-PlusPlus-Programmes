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
        inches=0.0;
    }
    Distance(int ft,float in)
    {
        feet=ft;
        inches=in;
    }
    void showDist()
    {
        cout<<feet<<inches;
    }
};

int main()
{
    Distance d1(10,15);
    Distance d2(d1);
    Distance d3=d1;
    d1.showDist();
    d2.showDist();
    d3.showDist();
    return 0;
}
