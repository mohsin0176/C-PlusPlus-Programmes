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
    Distance(float f)
    {
        feet=int(f);
        inches=12*(f-feet);
    }
    void getDist()
    {
        cin>>feet>>inches;
    }
    void showDist()
    {
        cout<<feet<<inches;
    }
    Distance Distance :: operator+(Distance dd2);
};
Distance Distance::opeartor+(Distance dd2)
{
    Distance dd3;
    dd3.feet=feet+dd2.feet;
    dd3.inches=inches+dd2.inches;
    if(dd3.inches>=12)
    {
        dd3.inches-=12;
        dd3.feet++;

    }
    return dd3;
}

int main()
{
    Distance d1(12,9);
    Distance d2(10,6);
    Distanced3,d4,d5;
    d3=d1+d2;
    d3.showDist();
    d4=d1+10;
    d4.showDist();
    return 0;
}
