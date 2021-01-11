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
         cout<<feet<<endl<<inches<<endl;
    }
    Distance square();
};
Distance Distance::square()
{
    Distance dd;
    float ft=feet+inches/12;
    ft=ft*ft;
    dd.feet=int(ft);
    dd.inches=12*(ft-dd.feet);
    return dd;
}
int main()
{
    Distance d1(12,9);
    Distance d2;
    d1.showDist();
    d2=d1.square();
    d2.showDist();
    return 0;
}
