#include<iostream>
#include<conio.h>
using namespace std;
class distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0){}
    Distance(int ft,float in):feet(ft),inches(in){}
    void getDist()
    {
        cin>>feet>>inches;
    }
    void showDist()
    {
        cout<<feet<<inches;
    }
};

int main()
{
    Distance d1,d2;
    d2.getDist();
    Distance d3(10,60);
    d1.showDist();
    d2.showDist();
    d3.showDist();
    return 0;
}
