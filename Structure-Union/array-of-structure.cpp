#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
void main()
{
    Distance d[5];
    int i;
    for(i=0;i<5;i++)
    {
        cin>>d[i].feet>>d[i].inches;
    }
    for(i=0;i<5;i++)
    {
        cout<<d[i].feet<<d[i].inches;
    }

}
