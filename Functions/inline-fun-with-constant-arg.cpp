#include<iostream>
#include<conio.h>
using namespace std;
const float PI=3.1416;
inline float area(const float r)
{
    return (PI*r*r);
}
int main()
{
    float radius;
    cin>>radius;
    cout<<area(radius);
    return 0;
}
