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
    int i,n=0;
    char ch;
    Distance *p[100];
    do
    {
        p[n]=new Distance;
        p[n]->getDist();
        n++;
        cin>>ch;

    }
    while(ch=='y'||ch=='Y');
    for(i=0;i<n;i++)
    {
        p[i]->showDist();
    }

    return 0;
}
