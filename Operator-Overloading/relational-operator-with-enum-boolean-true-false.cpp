#include<iostream>
#include<conio.h>
using namespace std;
enum boolean { false,true };
class distance
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
    void getDist()
    {
        cin>>feet>>inches;
    }
    void showDist()
    {
        cout<<feet<<inches;
    }
    boolean operator<(Distance);
};
boolean Distance::operator<(Distance dd2)
{
    float f1=feet+inches/12;
    float f2=dd2.feet+(dd2.inches/12);
    return ((f1<f2)?true:false);
}
int main()
{
    Distance d1,d2,d3;
    d1.getDist();
    Distance d2(10,60);
    d1.showDist();
    if(d1<d2)
    {
        cout<<"d1<d2";
    }
    else
    {
        cout<<"d1>=d2";
    }
    return 0;
}
