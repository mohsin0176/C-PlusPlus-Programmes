#include<iostream>
#include<conio.h>
using namespace std;

class Distance()
{
 private :
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
    void showDist()
    {
        cout<<feet<<inches;
    }
};
int main()
{
    Distance d1=Distance();
    Distance d2=Distance();
    Distance d3=Distance(10,60);
    d1.showDist();
    d2.showDist();
    d3.showDist()

    return 0;
}
