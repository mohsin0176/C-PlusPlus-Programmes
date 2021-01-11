#include<iostream>
#include<conio.h>
const float CF=3.280833;
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
    Distance(float m)
    {
        float ft=m*CF;
        feet=(int)ft;
        inches=12*(ft-feet);
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
    operator float()
    {
        float ft=feet+inches/12;
        return (ft/CF);
    }
};


int main()
{
    Distance d1=1;
    d1.showDist();
    d1=2;
    d1.showDist();
    Distance d2(10,60);
    float m=float(d2);
    cout<<m;
    m=d1;
    cout<<m;
    return 0;
}
