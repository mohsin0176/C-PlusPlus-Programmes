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
        cout<<feet<<inches;
    }
};
int main()
{
    Distance *p;
    p=new Distance;
    p->getDist();
    p->showDist();
    return 0;
}

