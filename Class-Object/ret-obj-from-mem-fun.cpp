#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{

private:
    int feet;
    float inches;
public:
    void getDist()
    {
        cin>>feet>>inches;
    }
    void showDist()
    {
        cin<<feet<<inches;
    }
    Distance addDist(Distance);
};
Distance Distance::addDist(Distance dd2)
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
void main()
{
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist();
    d3=d1.addDist(d2);
    d1.showDist();
    d2.showDist();
    d3.showDist();
}
