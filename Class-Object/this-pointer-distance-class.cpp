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
        cin>>this->feet>>this->inches;
    }
    void showDist()
    {
        cout<<this->feet<<this->inches;
    }
};
void main()
{
    Distance d1,d2;
    d1.getDist();
    d2.getDist();
    d1.showDist();
    d2.showDist();
}
