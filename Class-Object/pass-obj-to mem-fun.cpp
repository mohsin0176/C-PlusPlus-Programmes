#include<iostream>
#include<conio.h>
using namespace std;
class distance
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
        cout<<feet<<inches;
    }
    void addDist(Distance,Distanec);
};
void Distance::addDist(Distance dd1,Distance dd2)
{
    feet=dd1.feet+dd2.feet;
    inches=dd1.inches+dd2.inches;
    if(inches>=12)
    {
        inches-=12;
        feet++;
    }
}
void main()
{
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist();
    d3.addDist(d1,d2);
    d1.showDist();
    d2.showDist();
    d3.showDist();
}
