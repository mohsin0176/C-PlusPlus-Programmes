#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
    int feet;
    float inches;

};
int main()
{
    Distance d1;
    cin>>d1.feet;
    cin>>d1.inches;
    cout<<d1.feet;
    cout<<d1.inches;

    return 0;
}
